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
    
    ofPoint pos;
    ofPoint vel;
    ofPoint frc;
    ofVec2f dir;
    ofVec2f initPos;
    
    float radius , angle, velocity;
    
    float drag;
    float uniqueVal;
    float scale;
    
    bool alive;
};

#endif /* defined(__firstPebble__partiBlob__) */
