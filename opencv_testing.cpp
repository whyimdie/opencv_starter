#include <cv.h>
#include <highgui.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/videoio/videoio.hpp>

using namespace cv;
using namespace std;

int main(int agrc, char** argv) {
	int frameCount = 0;
	Mat frame;
	Mat previousFrame;
	Mat grayFrame;

	VideoCapture cap (0);
	if (!cap.isOpened()) {
		return -1;
	}

	namedWindow ("Original", CV_WINDOW_AUTOSIZE);
	namedWindow ("Gray Scale", CV_WINDOW_AUTOSIZE);
	for ( ; ; frameCount++){
		cap >> frame;
		imshow("Original", frame);
		if (waitKey(20) >= 0) break;
	}

	return 0;
}

