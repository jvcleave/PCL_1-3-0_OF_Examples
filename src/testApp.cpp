#include "testApp.h"
#define SAMPLE_XML_PATH "/Volumes/WORK_IN_PROGRESS/OPENFRAMEWORKS/007/openFrameworks/apps/PCL_1-3_APPS/openni-test/bin/data/SamplesConfig.xml"

//--------------------------------------------------------------
void testApp::setup(){
	/*openni_wrapper::OpenNIDriver& driver = openni_wrapper::OpenNIDriver::getInstance();
	cout <<"getNumberDevices: " << driver.getNumberDevices() << endl;
	interface = new pcl::OpenNIGrabber();
	interface->start();*/
	Context context;
	EnumerationErrors errors;
	XnStatus result = context.InitFromXmlFile(SAMPLE_XML_PATH, &errors);
	if(result != XN_STATUS_OK)
	{
		cout << "fuck me" << endl;
		for(EnumerationErrors::Iterator it = errors.Begin(); it != errors.End(); ++it) {
			XnChar desc[512];
			xnProductionNodeDescriptionToString(&it.Description(), desc,512);
			printf("%s failed: %s\n", desc, xnGetStatusString(it.Error()));
		}
	}
	XnMapOutputMode map_mode;
	DepthGenerator depth_generator;
	result = context.FindExistingNode(XN_NODE_TYPE_DEPTH, depth_generator);
	depth_generator.GetMapOutputMode(map_mode);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}