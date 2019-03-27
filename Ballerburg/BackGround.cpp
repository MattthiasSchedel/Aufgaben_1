#include "BackGround.h"

BackGround::BackGround(int time)
{
	this->time = time;
}

void BackGround::draw(Mat& frame)
{
	frame = cv::Scalar(250,206,135); //bgr
	//(135, 206, 250);
}