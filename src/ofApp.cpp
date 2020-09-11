#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(30);
    //img.load("MontSaint-Michel.jpg");
    img.load("img003.JPG");
    img.resize(ofGetWidth(), ofGetHeight());
    
    gui.setup();
    gui.add(breit.setup("breit", 150, 1, 255));
    gui.add(mosaic.setup("mosaic", 1, 1, 100));
    gui.add(pixWidth.setup("pixWidth", 5, 1, 50));
    gui.add(pixHeight.setup("pixHeight", 10, 1, 50));
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    //video.setup(ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
//    video.update();
//    if(video.isFrameNew()){
//        img.setFromPixels(video.getPixels().getData(), video.getWidth(), video.getHeight(), OF_IMAGE_COLOR);
//    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    //img.draw(0,0);
    cout << img.getWidth() << ", " << img.getHeight() << endl;
    for(int y=0; y<img.getHeight(); y+=mosaic){
        for(int x=0; x<img.getWidth(); x+=mosaic){
            ofColor col = img.getColor(x, y);
            ofSetColor(col, breit);
            ofDrawRectangle(x, y, col.getBrightness()/pixWidth, col.getBrightness()/pixHeight);
            //ofDrawRectangle(x, y, pixWidth, pixHeight);
        }
    }
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}
