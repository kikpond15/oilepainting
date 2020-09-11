#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void keyPressed(int key);
    
    ofImage img;
    ofVideoGrabber video;
    
    ofxPanel gui;
    ofxFloatSlider breit;
    ofxIntSlider mosaic;
    ofxFloatSlider pixWidth;
    ofxFloatSlider pixHeight;
    
};
