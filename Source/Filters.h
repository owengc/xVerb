/*
  ==============================================================================

    Filters.h
    Created: 15 Dec 2013 1:59:52pm
    Author:  Owen Campbell

  ==============================================================================
*/

#ifndef FILTERS_H_INCLUDED
#define FILTERS_H_INCLUDED

#include <algorithm>
#include <cmath>
#include <cassert>
#include <cstdlib>
#include <iostream>
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
    Delay(const int sr, const float d_ms, const float d_ms_max);
    ~Delay();
    
    //getters
    float getDelayTimeMS();
    float getMaxDelayTimeMS();
    
    //setters
    void setDelayTimeMS(const int sr, const float d_ms);
    
    //business functions
    float next(const float in, const float gain = 0.0f);
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
    Comb(const int sr, const float d_ms, const float d_ms_max, const float g);
    ~Comb();
    
    //getters
    float getGain();
    float getDelayTimeMS();
    
    //setters
    void setGain(const float g);
    void setDelayTimeMS(const float sr, const float d_ms);
    
    //business methods
    float next(const float in);
    
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
    Allpass(const int sr, const float d_ms, const float d_ms_max, const float g);
    ~Allpass();
    
    //getters
    float getGain();
    float getDelayTimeMS();
    
    //setters
    void setGain(const float g);
    void setDelayTimeMS(const float sr, const float d_ms);
    
    //business methods
    float next(const float in);
};


//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//  BASIC LOWPASS FILTER CLASS
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
class Lowpass{
private:
    float cutoff, coef, prev;
public:
    //constructor
    Lowpass(const int sr, const float cf_hz);
    
    //getters
    float getCutoff();
    
    //setters
    void setCutoff(const int sr, const float cf_hz);
    
    //business methods
    float next(const float in);
};

#endif  // FILTERS_H_INCLUDED
