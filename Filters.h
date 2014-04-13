/*
 ==============================================================================
 
 Filters.h
 Created: 11 Dec 2013 3:23:41pm
 Author:  Owen Campbell
 
 ==============================================================================
 */

#ifndef FILTERS_H_INCLUDED
#define FILTERS_H_INCLUDED

#include <algorithm>
#include <cmath>
#include <cassert>

//helper functions
inline float numSamplesFromMSf(const int sr, const float d_ms){
    return sr * d_ms * .001;
}

//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//  BASIC VARIABLE DELAY LINE CLASS (feedback optional)
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
class Delay{
private:
    int writePos, readPosA, readPosB, delay_samples;
    float delay_ms, fraction;
    int MAX_DELAY_SAMPLES;
    float MAX_DELAY_MS;
    float *buffer;
public:
    //constructor / destructor
    Delay(const int sr, const float d_ms, const float d_ms_max){
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
    ~Delay(){
        delete[] buffer;
    }
    
    //getters
    float getDelayTimeMS(){return delay_ms;}
    float getMaxDelayTimeMS(){return MAX_DELAY_MS;}
    
    //setters
    void setDelayTimeMS(const int sr, const float d_ms){
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
    float next(const float in, const float gain = 0.0f){
        //read pos interpolation
        float out = (1.0f - fraction) * buffer[readPosA++] +
        fraction * buffer[readPosB++];
        
        if(readPosA == MAX_DELAY_SAMPLES){//if we've reached the end of the buffer
            readPosA = 0;//wrap back to the beginning
        }
        if(readPosB == MAX_DELAY_SAMPLES){//if we've reached the end of the buffer
            readPosB = 0;//wrap back to the beginning
        }
        
        buffer[writePos++] = in + (gain * out);//by default there will be no feedback
        if(writePos == MAX_DELAY_SAMPLES){//if we've reached the end of the buffer
            writePos = 0;//wrap back to the beginning
        }
        return out;
    }
};

//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//  BASIC COMB FILTER CLASS
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
class Comb{
private:
    float gain;
    Delay *delay;
public:
    //constructor / destructor
    Comb(const int sr, const float d_ms, const float d_ms_max, const float g){
        gain = g;
        delay = new Delay(sr, d_ms, d_ms_max);
    }
    ~Comb(){
        delete delay;
    }
    
    //getters
    float getGain(){return gain;}
    float getDelayTimeMS(){return delay->getDelayTimeMS();}
    
    //setters
    void setGain(const float g){gain = g;}
    void setDelayTimeMS(const float sr, const float d_ms){return delay->setDelayTimeMS(sr, d_ms);}
    
    //business methods
    float next(const float in){
        return delay->next(in, gain);
    }
    
};

//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//  BASIC ALLPASS FILTER CLASS
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
class Allpass{
private:
    float gain;
    Delay *delay;
public:
    //constructor
    Allpass(const int sr, const float d_ms, const float d_ms_max, const float g){
        gain = g;
        delay = new Delay(sr, d_ms, d_ms_max);
    }
    ~Allpass(){
        delete delay;
    }
    
    //getters
    float getGain(){return gain;}
    float getDelayTimeMS(){return delay->getDelayTimeMS();}
    
    //setters
    void setGain(const float g){gain = g;}
    void setDelayTimeMS(const float sr, const float d_ms){return delay->setDelayTimeMS(sr, d_ms);}
    
    //business methods
    float next(const float in){
        float out = delay->next(in, gain);
        return out + (in * -gain);
    }
};


//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//  BASIC LOWPASS FILTER CLASS
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
class Lowpass{
private:
    float coef, prev;
public:
    //constructor
    Lowpass(const int sr, const float cf){
        float costh = 2.0 - cos(2.0 * M_PI * cf / sr);
        coef = sqrt(costh * costh - 1.0) - costh;
    }
    
    //business methods
    float next(const float in){
        prev = in * (1 + coef) - (prev * coef);
        return prev;
    }
};
#endif  // FILTERS_H_INCLUDED
