#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //just set up the openFrameworks stuff
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    ofBackground(255);
    
    int num = 1500;
    p.assign(num, expParticle());
    
    resetParticles();

}

//--------------------------------------------------------------
void ofApp::resetParticles(){
     
    for(unsigned int i = 0; i < p.size(); i++){
//        p[i].reset(ofGetWidth()/2, ofGetHeight()/2);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(unsigned int i = 0; i < p.size(); i++){
        p[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//        ofSetColor(20, 40, 40);
    
    for(unsigned int i = 0; i < p.size(); i++){
        p[i].draw();
    }


    ofCircle(ofGetMouseX(), ofGetMouseY(), 40);
    
}


//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    for(unsigned int i = 0; i < p.size(); i++){
        p[i].reset(x,y);
    }
}