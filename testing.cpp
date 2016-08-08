// Ghost effect video
#include <iostream>
#include <cv.h>   // headers
#include <highgui.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/videoio/videoio.hpp>

using namespace cv;
using namespace std;

int main(  int argc, char** argv ) {
	int frameCount;
	Mat frame;
	Mat preFrame;



	VideoCapture cap(0);				//open default camera
	if(!cap.isOpened()){return -1;}
	cap >> frame;

	namedWindow("Original",CV_WINDOW_AUTOSIZE);
	namedWindow("Lane Detection",CV_WINDOW_AUTOSIZE);

	for (; ; frameCount++){
		cap >> frame;

		rectangle(frame,Rect(270,10,100,100),Scalar(0,255,255),2,8,0);



		imshow("Original",preFrame);
		frame.copyTo(preFrame);

		if(waitKey(20) >= 0) break;
	}
    return 0;

}

