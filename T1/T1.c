//Pizza ordering system
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define length 100
#define maxpizza 10

char* pizza_names[] = { "Pizza Margherita", "Salami Classico", "Funghi", "Hawaiian Dream" };
char* pizza_size[] = { "S", "M", "L", "XL", "XXL", "Party size"};

enum pizza_name { Margherita, Salami, Funghi, Hawaii, numberOfTypes };
enum pizza_size { S, M, L, XL, XXL, PartySize, numberOfSizes };

struct oneOrder
{
	enum pizza_name PizzaName;
	enum pizza_size PizzaSize;
};

struct oneOrder allOrders[maxpizza];

enum pizza_names orderType()
{
	int T;
	for (int i = 0; i < numberOfTypes; i++)
	{
		printf("#%d: %s\n", i, pizza_names[i]);
	}

	do
	{
		scanf_s("%d", &T);
		if ((T < Margherita) || (T > numberOfTypes-1))
		{
			printf("There is no Pizza with this number, try again:\n");
		}
		else
		{
			printf("you ordered %s\n\n", pizza_names[T]);
			return T;
		}
	} while ((T < Margherita) || (T > numberOfTypes-1));
}

enum pizza_names ordersize()
{
	unsigned int T;
	for (int i = 0; i < numberOfSizes; i++)
	{
		printf("#%d: %s\n", i, pizza_size[i]);
	}

	do
	{
		scanf_s("%d", &T);
		if ((T < S) || (T > numberOfSizes-1))
		{
			printf("There is no Size this large, try again:\n");
		}
		else
		{
			printf("you ordered %s\n\n", pizza_size[T]);
			return T;
		}
	} while ((T < S) || (T > numberOfSizes-1));
}

void yourOrder(unsigned int Nr)
{
	printf("You ordered:\n");
	for (int i = 0; i < Nr; i++)
	{
		printf("Pizza #%d:%s, in %s\n", i + 1, pizza_names[allOrders[i].PizzaName], pizza_size[allOrders[i].PizzaSize]);
	}
}

main()
{
	printf("Welcome to Marios Pizza Service!\nYou can order up to &d pizzas\n", maxpizza);
	printf("press any key to start your order");
	_getch();

	char c;
	int ordercount = 0;
	do
	{
		system("cls");
		printf("Select Pizza #%d:\n", ordercount + 1);
		enum pizza_name desiredType = orderType();
		enum pizza_size desiredSize = ordersize();
		
		allOrders[ordercount].PizzaName = desiredType;
		allOrders[ordercount].PizzaSize = desiredSize;

		ordercount++;
		printf("do you want to order another Pizza?(y/n)");
		c = _getwch();
	} while ((c == 'y') && (ordercount < 10));

	system("cls");
	if (ordercount == 10)
	{
		printf("You can not order any more pizzas");
	}

	yourOrder(ordercount);
	
	_getch();
}