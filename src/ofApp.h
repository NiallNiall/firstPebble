#pragma once

#include "ofMain.h"
#include "partiBlob.h"
#include "explotest.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
        void mousePressed(int x, int y, int button);
    
        void resetParticles();

		vector <expParticle> p;
		
};
