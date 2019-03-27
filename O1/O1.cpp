#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


class NumberBox
{	
private:
	int counter = 0;
	float* Box;
	int size;

public:
	NumberBox(int _size)
	{
		Box = new float[_size];
		size = _size;
		printf("Constructor of class NumberBox was called.\n");
		printf("I created a number box which can store up to %d numbers.\n\n", _size);
	}

	void add_a_number(float number)
	{
		if (counter < size)
		{
			Box[counter] = number;

			printf("added number %.1f to the Box\n", number);
			counter++;
		}
		else
		{
			printf("Sorry but the box is full\n");
		}
	}

	void show_all_numbers_in_box()
	{
		printf("Numbers currently in the Box: ");
		for (int i = 0; i < counter; i++)
		{
			printf("%.1f ", Box[i]);
		}
		printf("\n\n");
	}

	void get_min_max(float* minval, float* maxval)
	{
		*minval = Box[0];
		for (int i = 1; i < counter; i++)
		{
			if (*minval > Box[i])
			{
				*minval = Box[i];
			}
		}
	
		*maxval = Box[0];
		for (int i = 1; i < counter; i++)
		{
			if (*maxval < Box[i])
			{
				*maxval = Box[i];
			}
		}
	}

	float get_arithmetic_mean()
	{
		float sum = 0;
		for (int i = 0; i < counter; i++)
		{
			sum = sum + Box[i];
		}
		return (sum / counter);
	}
	void BEFREIT_DEN_FLUSS()
	{
		delete Box;
	}
};

int main()
{
	NumberBox myBox(10);

	myBox.add_a_number(1.0);
	myBox.add_a_number(4.0);
	myBox.add_a_number(7.0);
	myBox.show_all_numbers_in_box();

	myBox.add_a_number(11.0);
	myBox.add_a_number(44.0);
	myBox.add_a_number(77.0);
	myBox.show_all_numbers_in_box();


	float minval, maxval;
	myBox.get_min_max(&minval, &maxval);
	printf("Minimum value of all numbers in box is: %.1f\n", minval);
	printf("Maximum value of all numbers in box is: %.1f\n", maxval);

	printf("Arithmetic mean of all numbers in box is: %.1f\n", myBox.get_arithmetic_mean());


	myBox.add_a_number(100.0);
	myBox.add_a_number(200.0);
	myBox.add_a_number(300.0);
	myBox.add_a_number(400.0);
	myBox.add_a_number(500.0);
	myBox.add_a_number(600.0);

	_getch();
	myBox.BEFREIT_DEN_FLUSS();
}
