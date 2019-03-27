#include "opencv2/opencv.hpp"
#include <conio.h>

#include "Mountain.h"
#include "Floor.h"
#include "BackGround.h"

using namespace cv;
using namespace std;

#define PLAYFIELD_WIDTH 1500
#define PLAYFIELD_HEIGHT 1500
#define FLOORHEIGHT PLAYFIELD_HEIGHT-100
#define WIDTH PLAYFIELD_WIDTH / 2.5
#define HEIGHT PLAYFIELD_HEIGHT / 2.5


int main()
{
	Mat frame(PLAYFIELD_HEIGHT, PLAYFIELD_WIDTH, CV_8UC3);

	BackGround b(1);
	b.draw(frame);

	Mountain m(FLOORHEIGHT,
		PLAYFIELD_WIDTH / 2,
		(int)((1.0 / 3.0)*PLAYFIELD_WIDTH),
		PLAYFIELD_HEIGHT / 2);
	m.draw(frame);

	Floor f(FLOORHEIGHT, PLAYFIELD_WIDTH, PLAYFIELD_HEIGHT);
	f.draw(frame);

	
	namedWindow("Ballerburg", WINDOW_KEEPRATIO);
	
	imshow("Ballerburg",frame);

	cv::resizeWindow("Ballerburg", WIDTH, HEIGHT);

	waitKey(0);



}