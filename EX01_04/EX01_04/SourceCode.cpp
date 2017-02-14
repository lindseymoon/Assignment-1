#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

void ex04();
void partD();

int main()
{
	ex04();
	partD();
	return 0;
}

void ex04()
{
	//a) loop that asks user for 3 integers, stores those numbers in an array
	const int size = 3;
	int values[size];

	cout << "Please enter three numbers: ";

	for (int i = 0; i < size; i++)
	{
		cin >> values[i];
	}

	//b) calculates the sum and the product of the values and outputs results
	cout << values[0] + values[1] + values[2] << endl;
	cout << values[0] * values[1] * values[2] << endl;

	cout << endl;

	//c) takes an array and size of the array, outputs the values in the array
	cout << "The numbers you entered were: ";

	for (int i = 0; i < size; i++)
	{
		cout << values[i] << " ";
	}

	cout << endl;

}

void partD()
{
	//d) takes an array and size of that array, prompts user for a value (x), the array is (a). Output result using equation (p)
	int x;
	cout << "Please enter a value: ";
	cin >> x;
	int a[3] = { 4, 3, 2 };
	int p = a[2] * (x * x) + a[1] * x + a[0];
	cout << "The value of p equals: " << p << endl;

}