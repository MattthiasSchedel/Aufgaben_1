#include "opencv2/opencv.hpp"
#include <conio.h>

#define ex 500
#define wy 500


using namespace cv;
using namespace std;


int main()
{
	Mat frame(ex+1, wy+ 1, CV_8UC3);



	Point p1(00, wy);
	Point p2(ex, wy);

	frame.at<Vec3b>(p1) = Vec3b(0, 255, 0);
	frame.at<Vec3b>(p2) = Vec3b(255, 0, 0);

	for(int g=0;g<=(ex/2);g++)
	{
		for (int i = 0; i <= ex-((ex/2)+g); i++)
		{
			float whyy = (((i - (ex / 2))*(i - (ex / 2))) / ex) - (ex / 4);
			Point p(p1.x + i + g, p1.y + whyy);
				frame.at<Vec3b>(p) = Vec3b(0, 0, 0);
				//printf("%.3f\n", whyy);
		}
	}
	for (int g = 0; g <= (ex / 2); g++)
	{
		for (int i = (ex / 2)+g; i <= ex ; i++)
		{
			float whyy = (((i - (ex / 2))*(i - (ex / 2))) / ex) - (ex / 4);
			Point p(p1.x + i - g, p1.y + whyy);
			frame.at<Vec3b>(p) = Vec3b(0, 0, 0);
			//printf("%.3f\n", whyy);
		}
	}
	//cv::rectangle(frame, Point(0,wy-20), Point(20,wy), cv::Scalar(0, 0, 0), -1);
	int width = frame.cols;
	int height = frame.rows;
	imshow("Ballerburg", frame);
	waitKey(0);
}