//
//  partiBlob.cpp
//  firstPebble
//
//  Created by Niall on 13/02/2015.
//
//

#include "partiBlob.h"

//------------------------------------------------------------------
expParticle::expParticle(){

}


//------------------------------------------------------------------
void expParticle::reset(int partX, int partY){
    //the unique val allows us to set properties slightly differently for each particle
    uniqueVal = ofRandom(-10000, 10000);
    
    initPos.x = partX;
    initPos.y = partY;
    
    pos.x = partX;
    pos.y = partY;
    
    velocity = ofRandom(0.2, 5);
    radius = 0;
    angle = ofRandom(0, 360);
    
    vel.x = ofRandom(-3.9, 3.9);
    vel.y = ofRandom(-3.9, 3.9);

//    vel.x = 1.0;
//    vel.y = 1.0;
    dir.x = ofRandom(0, 1.0);
    dir.y = ofRandom(0, 1.0);
    
    frc   = ofPoint(0,0,0);
    
    scale = ofRandom(0.5, 1.0);

    alive = true;

}

//------------------------------------------------------------------
void expParticle::update(){
    


    if(alive) {
        
        radius += velocity;;
        
        if(scale > 0) {
            scale -= 0.01;
        }
        
//        pos.x += 0.2 * vel.x;
//        pos.y += 0.2 * vel.y;
        
    pos.x = initPos.x + cos(angle) * radius;
    pos.y = initPos.y + sin(angle) * radius;
        
        
    }
    

    
    if(pos.x < (ofGetWidth()/2 -200) || pos.x > (ofGetWidth()/2 +200)) {
        alive = false;
    }
    
}

//------------------------------------------------------------------
void expParticle::draw(){
    
    ofSetColor(20, 40, 40, 20);
    ofCircle(pos.x, pos.y, 20 * scale);
    
}