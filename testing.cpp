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
	Mat grayFrame;
	Mat frameDiff;
	Mat preGrayFrame;
	int pix;



	VideoCapture cap(0);				//open default camera
	if(!cap.isOpened()){return -1;}
	cap >> frame;

	cout <<"Frame columns: " <<frame.cols <<endl;			//look at frame cols and rows to DRAW
	cout <<"Frame rows: " <<frame.rows <<endl;
	
	//in this case, cols = 640 and rows = 480 (check the cols and rows when run cmd, CHECK AND CHANGE BELOW);
	int frameColumn = 640;
	int frameRow = 480; 

	namedWindow("Original",CV_WINDOW_AUTOSIZE);
	namedWindow("Lane Detection",CV_WINDOW_AUTOSIZE);

	for (; ; frameCount++){
		cap >> frame;

		rectangle(frame,Rect(270,0,100,480),Scalar(0,255,255),2,8,0);
		
		cvtColor(frame,grayFrame,CV_RGB2GRAY);				//make the frame to gray, take effect in gray scale;
		frame.copyTo(preGrayFrame);
		
		int x,y;											//x run to cols, y run to rows
		for ( ; x < preGrayFrame.cols; x++) {
		preGrayFrame.at<uchar> (x,y) 
	
		
		if (preGrayFrame.at<uchar>(x,y))
		
		
		
		frame.copyTo(preFrame);
		absdiff(preFrame,frame,frameDiff);
		
		
		



		imshow("Original",frame);
//		frame.copyTo(frame);

		if(waitKey(20) >= 0) break;
	}
    return 0;

}
