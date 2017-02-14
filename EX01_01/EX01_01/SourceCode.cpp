#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

void ex01();

int main()
{
	ex01();

	return 0;
}

void ex01()
{	
	//a) declare a variable hasPassedTest, initialize it to true
	int hasPassedTest = true;

	//b) declare two variables x and y, initialized to random, then outputs whether x is greater than or equal to y
	srand(time(NULL));
	int x = rand() % 100;
	cout << x << endl;
	int y = rand() % 100;
	cout << y << endl;
	if (x >= y)
	{
		cout << "x is greater than or equal to y." << endl << endl;
	}

	//c) declare a variable numberOfShares, prompts user for a value less than 100
	int numberOfShares;
	cout << "Please enter a number: ";
	cin >> numberOfShares;
	cout << endl;
	if (numberOfShares < 100)
	{
		cout << "The value you entered is less than 100." << endl;
	}
	else
	{
		cout << "The value you entered is equal to or greater than 100." << endl;
	}

	//d) prompts user for a box width and book width, outputs if the box width is evenly divisible by the book width
	int boxWidth, bookWidth;
	cout << "Please enter a box width: ";
	cin >> boxWidth;
	cout << endl;
	cout << "Please enter a book width: ";
	cin >> bookWidth;
	if (boxWidth % bookWidth == 0)
	{
		cout << "The box widthis evenly divisble by the book width" << endl;
	}
	else
	{
		cout << "The box width is not evenly divisble by the book width." << endl;
	}

	//e) prompts user for shelf life of chocolate, prompts user for outside temp, decreases shelf life by 4 if outside temp is greater than 90
	int shelfLife, outsideTemp;
	cout << "The shelf life for a box of chocolate is: ";
	cin >> shelfLife;
	cout << "The temperature outside is: ";
	cin >> outsideTemp;
	if (outsideTemp > 90)
	{
		cout << "the shelf life = " << (shelfLife - 4) << endl;
	}
	else
	{
		cout << "The shelf life remains the same at " << shelfLife;
	}
	
}