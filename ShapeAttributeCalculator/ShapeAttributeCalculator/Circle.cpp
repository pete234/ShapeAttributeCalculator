#include "stdafx.h"
#include "Circle.h"


Circle::Circle()
{
	area = 0.0;	//Declared variable be given a value
}


Circle::~Circle()
{
}

void Circle::collectRadius()
{
	cout << "Enter the radius of the Circle." << endl;		//An output telling the user what to do
	cin >> radius;		//An input to be stored to a variable

	if (cin.fail())
	{
		system("CLS");	//Clears the screen
		cin.clear();		//Clears the cin flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n');	//Tells the program what to ignor

		cout << "Invalid Input. \n";//An output telling the user what to do
		collectRadius();	
	}
	else if (radius < 0)
	{
		system("CLS");	//Clears the screen
		cout << "No negative values. Please try again." << endl;//An output telling the user what to do
		collectRadius();
	}
	else
	{}

	calcCircumfrence();
	calcArea();
}

void Circle::calcCircumfrence()
{
	circumfrence = 2 * (pi * radius);	//The algorithm for the shape
	cout << "Circumfrence: " << circumfrence << endl;	//The answer is output
}

void Circle::calcArea()
{
	area = pi * (radius * radius);	//The algorithm for the shape
	cout << "Area: " << area << endl;	//The answer is output
	RunAgain.runAgain(); // an object to ask the user is they want to use the program again
}

