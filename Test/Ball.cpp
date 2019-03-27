#include "Ball.h"
#define speed 1
#define g 9.81

Ball::Ball(int weight, int drag, int waterlevel, int input)
{
	this->drag = drag;
	this->input = input;
	this->weight = weight;
	this->waterlevel = waterlevel;
}
void Ball::draw(Mat&frame)
{
	int t=0;

	char c = _getwch();

	velocity = velocity - g * t;
	
	pos = pos + velocity * speed;

}