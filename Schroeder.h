/*
 ==============================================================================
 
 Schroeder.h
 Created: 11 Dec 2013 10:03:34pm
 Author:  Owen Campbell
 
 ==============================================================================
 */

#ifndef SCHROEDER_H_INCLUDED
#define SCHROEDER_H_INCLUDED

#include"Filters.h"
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

class Schroeder{
private:
    float decayFactor;
    Comb *combs[NUM_COMBS];
    Allpass *allpasses[NUM_ALLPASSES];
public:
    //constructor / destructor
    Schroeder(const int sr = 44100, const float rt60 = 3.0,
              const float cDelay1 = 29.7, const float cDelay2 = 37.1, const float cDelay3 = 41.1, const float cDelay4 = 43.7,
              const float aDelay1 = 5.0, const float aDelay2 = 1.7, const float aGain1 = 0.7, const float aGain2 = 0.7){
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
    }
    ~Schroeder(){}/*{
        for(int i = 0; i < NUM_COMBS; i++){
            delete[] combs[i];
        }
        for(int i = 0; i < NUM_ALLPASSES; i++){
            delete[] allpasses[i];
        }
    }*/
    
    //getters
    float getDecayFactor(){return decayFactor;}
    float getCombDelay(const int id){
        return combs[id]->getDelayTimeMS();
    }
    float getAllpassDelay(const int id){
        return allpasses[id]->getDelayTimeMS();
    }
    float getAllpassGain(const int id){
        return allpasses[id]->getGain();
    }
    
    //setters
    void setDecayFactor(const float df){
        decayFactor = df;
        for(int i = 0; i < NUM_COMBS; i++){
            combs[i]->setGain(calcCombGain(combs[i]->getDelayTimeMS(), decayFactor));
        }
    };
    void setCombDelay(const int id, const float sr, const float d_ms){
        combs[id]->setGain(calcCombGain(d_ms, decayFactor));
        combs[id]->setDelayTimeMS(sr, d_ms);
    }
    void setAllpassGain(const int id, const float g){allpasses[id]->setGain(g);}
    void setAllpassDelay(const int id, const int sr, const float d_ms){allpasses[id]->setDelayTimeMS(sr, d_ms);}
    
    //business methods
    float next(const float in){
        float out;
        for(int i = 0; i < NUM_COMBS; i++){
            out += combs[i]->next(in);
        }
        out = allpasses[1]->next(allpasses[0]->next(out));
        return out * 0.1;
    }
    //update for change in sampling rate and to clear delay buffers...
    /*void reset(const int sr){
     //for each delay if sr changed, re-allocate buffers
     //for each delay, clear buffer
    }*/
};
#endif  // SCHROEDER_H_INCLUDED