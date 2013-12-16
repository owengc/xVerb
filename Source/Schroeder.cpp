/*
  ==============================================================================

    Schroeder.cpp
    Created: 15 Dec 2013 2:12:14pm
    Author:  Owen Campbell

  ==============================================================================
*/

#include "Schroeder.h"

//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//  SCHROEDER REVERB
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////

#define NUM_COMBS 4
#define NUM_ALLPASSES 2

//helper functions
inline float calcCombGain(const float d_ms, const float rt60){
    return pow(10.0, ((-3.0 * d_ms) / (rt60 * 1000.0)));
}


//constructor / destructor
Schroeder::Schroeder(const int sr, const float rt60,
          const float cDelay1, const float cDelay2, const float cDelay3, const float cDelay4,
          const float aDelay1, const float aDelay2, const float aGain1, const float aGain2){
    decayFactor = rt60;
    float d_ms, d_ms_max = 100.0f, gain;
    d_ms = cDelay1;
    gain = calcCombGain(d_ms, decayFactor);
    combs[0] = new Comb(sr, d_ms, d_ms_max, gain);
    d_ms = cDelay2;
    gain = calcCombGain(d_ms, decayFactor);
    combs[1] = new Comb(sr, d_ms, d_ms_max, gain);
    d_ms = cDelay3;
    gain = calcCombGain(d_ms, decayFactor);
    combs[2] = new Comb(sr, d_ms, d_ms_max, gain);
    d_ms = cDelay4;
    gain = calcCombGain(d_ms, decayFactor);
    combs[3] = new Comb(sr, d_ms, d_ms_max, gain);
    
    d_ms_max = 20.0f;
    allpasses[0] = new Allpass(sr, aDelay1, d_ms_max, aGain1);
    allpasses[1] = new Allpass(sr, aDelay2, d_ms_max, aGain2);
    //std::cout << "Schroeder constructor called" << std::endl;

}
Schroeder::~Schroeder(){
    //std::cout << "Schroeder destructor called" << std::endl;
    for(int i = 0; i < NUM_COMBS; i++){
        delete combs[i];
    }
    for(int i = 0; i < NUM_ALLPASSES; i++){
        delete allpasses[i];
    }
}

//getters
float Schroeder::getDecayFactor(){return decayFactor;}
float Schroeder::getCombDelay(const int id){
    return combs[id]->getDelayTimeMS();
}
float Schroeder::getAllpassDelay(const int id){
    return allpasses[id]->getDelayTimeMS();
}
float Schroeder::getAllpassGain(const int id){
    return allpasses[id]->getGain();
}

//setters
void Schroeder::setDecayFactor(const float df){
    decayFactor = df;
    for(int i = 0; i < NUM_COMBS; i++){
        combs[i]->setGain(calcCombGain(combs[i]->getDelayTimeMS(), decayFactor));
    }
};
void Schroeder::setCombDelay(const int id, const float sr, const float d_ms){
    combs[id]->setGain(calcCombGain(d_ms, decayFactor));
    combs[id]->setDelayTimeMS(sr, d_ms);
}
void Schroeder::setAllpassGain(const int id, const float g){allpasses[id]->setGain(g * ALLPASS_GAIN_LIMIT);}
void Schroeder::setAllpassDelay(const int id, const int sr, const float d_ms){allpasses[id]->setDelayTimeMS(sr, d_ms);}

//business methods
float Schroeder::next(const float in){
    float out = 0.0f;
    for(int i = 0; i < NUM_COMBS; i++){
        out += combs[i]->next(in * 0.01f);
    }
    out = allpasses[1]->next(allpasses[0]->next(out));
    return out * 2.5f;//still working out best way to avoid clipping
}
//update for change in sampling rate and to clear delay buffers...
/*void reset(const int sr){
 //for each delay if sr changed, re-allocate buffers
 //for each delay, clear buffer
 }*/
