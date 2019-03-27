#include "Floor.h"

Floor::Floor(int floorheight, int framewidth, int frameheight)
{
	this->floorheight = floorheight;
	this->framewidth = framewidth;
	this->frameheight = frameheight;
}

void Floor::draw(Mat& frame)
{
	cv::rectangle(frame,Point(0,floorheight),Point(framewidth,frameheight), Scalar(25, 25, 25), CV_FILLED, CV_AA);

	
}