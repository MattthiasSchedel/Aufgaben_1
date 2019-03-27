#pragma once

#include "opencv2/opencv.hpp"
using namespace cv;

class BackGround
{
public:
	BackGround(int time);
	void draw(Mat& frame);

private:
	int time;
};