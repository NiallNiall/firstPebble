//
//  partiBlob.h
//  firstPebble
//
//  Created by Niall on 13/02/2015.
//
//

#ifndef __firstPebble__partiBlob__
#define __firstPebble__partiBlob__

#include <stdio.h>
#include "ofMain.h"

class expParticle{
    
public:
    expParticle();
        
    void reset(int partX, int partY);
    void update();
    void draw();
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f frc;
    ofVec2f dir;
    ofVec2f initPos;
    
    float radius , angle, velocity;
    
    float drag;
    float uniqueVal;
    float scale;
    
    bool alive;
    
    ofColor colors[3];
    int rndclr;
};

#endif /* defined(__firstPebble__partiBlob__) */
