#include "Mountain.h"





Mountain::Mountain(int floorheight, int middle, int width, int height)
{
	this->floorheight = floorheight;
	this->middle = middle;
	this->width = width;
	this->height = height;
}


void Mountain::draw(Mat& frame)
{
	int lineType = 8;
	int w = 300;

	int counter = 0;
	Point rook_points[1][500];

	// left start point
	rook_points[0][counter++] = Point(middle - width / 2, floorheight);

	int INTERPOINTS = 30;
	int deltax = (width / 2) / INTERPOINTS;
	int deltay = height / INTERPOINTS;
	for (int i = 0; i < INTERPOINTS; i++)
	{
		int rnd_height_offset = rand() % 41 - 20;
		int x = middle - width / 2 + i * deltax;
		int y = floorheight - i * deltay + rnd_height_offset;
		rook_points[0][counter++] = Point(x, y);
	}

	// peak
	rook_points[0][counter++] = Point(middle, floorheight - height);

	INTERPOINTS = 30;
	deltax = (width / 2) / INTERPOINTS;
	deltay = height / INTERPOINTS;
	for (int i = 0; i < INTERPOINTS; i++)
	{
		int rnd_height_offset = rand() % 41 - 20;
		int x = middle + i * deltax;
		int y = floorheight - (INTERPOINTS - i) * deltay + rnd_height_offset;
		rook_points[0][counter++] = Point(x, y);
	}

	// right end point
	rook_points[0][counter++] = Point(middle + width / 2, floorheight);


	const Point* ppt[1] = { rook_points[0] };
	int npt[] = { counter };
	fillPoly(frame,
		ppt,
		npt,
		1,
		Scalar(25, 25, 25),
		CV_AA);

	
}