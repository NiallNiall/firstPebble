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
    
    colors[0] = ofColor(147,196,198,120);
    colors[1] = ofColor(45,185,221,120);
    colors[2] = ofColor(0,150,220,120);
    colors[3] = ofColor(250,0,0,100);
    
//    colors[0] = ofColor(200,250,40,120);
//    colors[1] = ofColor(20,130,250,120);
//    colors[2] = ofColor(250,30,140,120);
//    colors[3] = ofColor(190,130,40,120);
    
    rndclr = ofRandom(0, 3);

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
    

    ofVec2f limit = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
    
    
//    if(pos.x < (ofGetWidth()/2 -200) || pos.x > (ofGetWidth()/2 +200)) {
//        alive = false;
//    }
//    
//    if(pos.y < (ofGetHeight()/2 -200) || pos.y > (ofGetHeight()/2 +200)) {
//        alive = false;
//    }
    
    if(pos.x < 0 || pos.x > ofGetWidth()) {
        alive = false;
    }
    
    if(pos.y < 0 || pos.y > ofGetHeight()) {
        alive = false;
    }
    
}

//------------------------------------------------------------------
void expParticle::draw(){
    
    ofSetColor(colors[rndclr]);
    ofCircle(pos.x, pos.y, 20 * scale);
    
}