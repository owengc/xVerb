/*
  ==============================================================================

    Filters.cpp
    Created: 15 Dec 2013 1:59:52pm
    Author:  Owen Campbell

  ==============================================================================
*/

#include "Filters.h"


//helper functions
inline float numSamplesFromMSf(const int sr, const float d_ms){
    return sr * d_ms * .001;
}

//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//  BASIC VARIABLE DELAY LINE CLASS (feedback optional)
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//constructor / destructor
Delay::Delay(const int sr, const float d_ms, const float d_ms_max){
    assert(d_ms <= d_ms_max);//check bound on delay time
    
    MAX_DELAY_SAMPLES = ceil(numSamplesFromMSf(sr, d_ms_max));
    MAX_DELAY_MS = MAX_DELAY_SAMPLES * 1000.0f / sr; //make sure float version is set with to integer-rounded buffer size
    
    delay_ms = d_ms;
    float delay_samplesf = numSamplesFromMSf(sr, d_ms);
    delay_samples = floor(delay_samplesf);
    fraction = delay_samplesf - delay_samples;//storing fractional delay time, will be interpolated
    
    writePos = 0;
    readPosA = delay_samples;
    readPosB = readPosA + 1;
    if(readPosB > MAX_DELAY_SAMPLES){
        readPosB = 0;
    }
    
    buffer = new float[MAX_DELAY_SAMPLES];
    std::fill(buffer, buffer + MAX_DELAY_SAMPLES, 0.0f);
}
Delay::~Delay(){
    delete[] buffer;
}

//getters
float Delay::getDelayTimeMS(){return delay_ms;}
float Delay::getMaxDelayTimeMS(){return MAX_DELAY_MS;}

//setters
void Delay::setDelayTimeMS(const int sr, const float d_ms){
    assert(d_ms <= MAX_DELAY_MS);//check bound on delay time
    
    delay_ms = d_ms;
    float delay_samplesf = numSamplesFromMSf(sr, d_ms);
    delay_samples = floor(delay_samplesf);
    fraction = delay_samplesf - delay_samples;//storing fractional delay time, output will be interpolated
    
    //udpate read heads
    readPosA = writePos + delay_samples;
    if(readPosA >= MAX_DELAY_SAMPLES){
        readPosA -= MAX_DELAY_SAMPLES;//wrap around
    }
    readPosB = readPosA + 1;
    if(readPosB == MAX_DELAY_SAMPLES){
        readPosB = 0;
    }
}

//business functions
float Delay::next(const float in, const float gain){
    //read pos interpolation
    float out = (1.0f - fraction) * buffer[readPosA++] +
    fraction * buffer[readPosB++];
    //std::cout << "Out: " << out << std::endl;
    if(readPosA == MAX_DELAY_SAMPLES){//if we've reached the end of the buffer
        readPosA = 0;//wrap back to the beginning
        //std::cout << "wrapping readA" << std::endl;
    }
    if(readPosB == MAX_DELAY_SAMPLES){//if we've reached the end of the buffer
        readPosB = 0;//wrap back to the beginning
        //std::cout << "wrapping readB" << std::endl;
    }
    
    buffer[writePos++] = in + (gain * out);//by default there will be no feedback
    if(writePos == MAX_DELAY_SAMPLES){//if we've reached the end of the buffer
        writePos = 0;//wrap back to the beginning
        //std::cout << "wrapping write" << std::endl;
    }
    return out;
}

//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//  BASIC COMB FILTER CLASS
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//constructor / destructor
Comb::Comb(const int sr, const float d_ms, const float d_ms_max, const float g){
    gain = g;
    delay = new Delay(sr, d_ms, d_ms_max);
}
Comb::~Comb(){
    delete delay;
}

//getters
float Comb::getGain(){return gain;}
float Comb::getDelayTimeMS(){return delay->getDelayTimeMS();}

//setters
void Comb::setGain(const float g){gain = g;}
void Comb::setDelayTimeMS(const float sr, const float d_ms){return delay->setDelayTimeMS(sr, d_ms);}

//business methods
float Comb::next(const float in){
    return delay->next(in, gain);
}

//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//  BASIC ALLPASS FILTER CLASS
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//constructor
Allpass::Allpass(const int sr, const float d_ms, const float d_ms_max, const float g){
    gain = g;
    delay = new Delay(sr, d_ms, d_ms_max);
}
Allpass::~Allpass(){
    delete delay;
}

//getters
float Allpass::getGain(){return gain;}
float Allpass::getDelayTimeMS(){return delay->getDelayTimeMS();}

//setters
void Allpass::setGain(const float g){gain = g;}
void Allpass::setDelayTimeMS(const float sr, const float d_ms){return delay->setDelayTimeMS(sr, d_ms);}

//business methods
float Allpass::next(const float in){
    float out = delay->next(in, gain);
    return out + (in * -gain);
}



//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//  BASIC LOWPASS FILTER CLASS
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//constructor
Lowpass::Lowpass(const int sr, const float cf){
    float costh = 2.0 - cos(2.0 * M_PI * cf / sr);
    coef = sqrt(costh * costh - 1.0) - costh;
}

//business methods
float Lowpass::next(const float in){
    prev = in * (1 + coef) - (prev * coef);
    return prev;
}