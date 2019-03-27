#pragma once

#include "opencv2/opencv.hpp"
using namespace cv;

class Ball
{
public:
	Ball(int weight, int drag, int waterlevel,int input);

	void draw(Mat& frame);


	
private:
	int weight;
	int drag;
	int waterlevel;
	int input;

	float velocity;
	int pos = waterlevel;
};