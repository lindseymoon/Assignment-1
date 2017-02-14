#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

void ex02();

int main()
{
	ex02();

	return 0;
}

void ex02()
{
	//a) prompt user for length and height of triangle, output length of hypotenuse
	double length, height, hypotenuse;
	cout << "Please enter the length of the traingle: ";
	cin >> length;
	cout << "Please enter the height of the traingle: ";
	cin >> height;
	cout << "The hypotenuse of the triangle is " << (sqrt((length * length) + (height * height))) << endl;

	//b) prompt user for a y or n using char, output yes if user gives ‘y’ou y and no if user gave ‘n’
	char y, n, input;
	cout << "Please enter y or n: ";
	cin >> input;
	if (input == y)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	//c) initialize a char variable tab to the tab character
	char tab = '\t'; //single quotes is char, double quotes is string
	cout << tab << endl;

	//d) declare string variable mailingAddress, prompt user for mailing address
	string mailingAddress;
	cout << "PLease enter your mailing address: ";
	cin >> mailingAddress;

	//e) initialize a string variable to an empty string
	string x = "";
}