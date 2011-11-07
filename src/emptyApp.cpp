#include "emptyApp.h"


//--------------------------------------------------------------
void emptyApp::setup(){
	info = "";
	info +="This is an empty app set to default\n";
	info +="This is mainly used to copy and start new examples\n";
	info +="Working apps are in the working folder\n";
	info +="Apps in the non-working folder won't compile\n";
	info +="Apps in the crashing folder compile but crash\n";
}

//--------------------------------------------------------------
void emptyApp::update(){

}

//--------------------------------------------------------------
void emptyApp::draw(){
	
	ofSetColor(255, 0, 0);
	ofDrawBitmapString(info, 20, 20);
}

//--------------------------------------------------------------
void emptyApp::keyPressed(int key){

}

//--------------------------------------------------------------
void emptyApp::keyReleased(int key){

}

//--------------------------------------------------------------
void emptyApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void emptyApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void emptyApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void emptyApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void emptyApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void emptyApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void emptyApp::dragEvent(ofDragInfo dragInfo){ 

}