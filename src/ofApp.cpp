#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFullscreen(true);
    ofBackground(0);
    ofSetLineWidth(1);
    numVert = 10;
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    ofSetBackgroundAuto(false);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    pos.x = mouseX - ofGetWidth()/2;
    pos.y = mouseY - ofGetHeight()/2;
    
    pre_pos.x = ofGetPreviousMouseX() - ofGetWidth()/2;
    pre_pos.y = ofGetPreviousMouseY() - ofGetHeight()/2;
    
    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
        
        ofSetColor(0, 80, 100);
        
        for (float i = 0; i < 360; i += 360/numVert) {
            
            ofPushMatrix();
            ofRotate(i);
            ofDrawLine(pos.x, pos.y, pre_pos.x, pre_pos.y);
            ofDrawLine(-pos.x, pos.y, -pre_pos.x, pre_pos.y);
            ofPopMatrix();
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
