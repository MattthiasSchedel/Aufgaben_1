#pragma once

#include "opencv2/opencv.hpp"
using namespace cv;

class Floor {
public:
	Floor(int floorheight, int framewidth, int frameheight);
	void draw(Mat& frame);

private:
	int floorheight;
	int framewidth;
	int frameheight;
};