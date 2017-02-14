#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

void ex03();
int doubleNumber(int value);
int add(int a, int b);
int addOne(int&);

int main()
{
	ex03();
	 
	//f) call it using two random numbers
	int a, b;
	srand(time(NULL));
	a = rand() % 10;
	b = rand() % 10;
	int c = add(a, b);
	cout << a << " + " << b << " = " << c << endl;

	//g) adds one to its parameter, pass by reference
	int x = 5;
	int add = addOne(x);
	cout << x;
	cout << endl;

	return 0;
}

void ex03()
{
	//a) ask user for a number between 1 and 10, loop until user gives a valid input
	int value;
	do
	{
		cout << "Please enter a value between 1 and 10: ";
		cin >> value;
	} while (value < 1 || value > 10);

	cout << endl << endl;

	//b) use number from (a) to output the sum of the cubes from 1 to number given
	int cube = value * value * value;
	cout << "The number you entered cubed is " << cube << ".";

	cout << endl << endl;

	//c) use a do-while loop to output a number of *, using input from (a)
	int num = 0;
	do
	{
		cout << "* ";
		num++;
	}

	while (num < value);
	cout << endl << endl;

	cout << endl << endl;

	//d) use a for loop to output the even numbers from 0 to 40
	int even;
	for (even = 0; even <= 40; even += 2)
	{
		cout << even << " ";
	}

	cout << endl << endl;

	//e) implement a separate function that takes an integer, and doubles that integer
	int y = doubleNumber(value);
	cout << y << endl;

	cout << endl << endl;

}

//e) separate function that takes an integer, returns value
int doubleNumber(int value)
{
	return (value * 2);
}

//f) function that takes two integers, returns the sum of the integers
int add(int a, int b)
{
	return a + b;
}

//g) function that adds one to an integer
int addOne(int& x)
{
	x = x + 1;
	return x;
}
