#include "opencv2/opencv.hpp"
#include <conio.h>
#include <math.h>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace cv;
using namespace std;

#define PLAYFIELD_WIDTH 700
#define PLAYFIELD_HEIGHT 700

#define WATERLEVEL PLAYFIELD_HEIGHT *2/3
#define DRAG 10
#define WHEIGHT 40



int main()
{
	Mat frame(PLAYFIELD_WIDTH, PLAYFIELD_HEIGHT, CV_8UC3);


	_getch();
}