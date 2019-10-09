#include "stdafx.h"
#include "Rectangle.h"


Rectangle::Rectangle()
{
}


Rectangle::~Rectangle()
{
}

void Rectangle::collectWidth()
{
	cout << "Enter the width of the rectangle" << endl;//An output telling the user what to do
	cin >> side;//An input to be stored to a varible
	
	if (cin.fail())
	{
		system("CLS");	//Clears the screen
		cin.clear();	//Clears the cin flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n');	//Tells the program what to ignor

		cout << "Invalid Input. \n";//An output telling the user what to do
		collectWidth();
	}
	else if (length < 0)
	{
		system("CLS");	//Clears the screen
		cout << "No negative values. Please try again." << endl;//An output telling the user what to do
		collectWidth();
	}
	else
	{
	}
	collectLength();
}

void Rectangle::collectLength()
{
	cout << "Enter the length of the rectangle" << endl;//An output telling the user what to do
	cin >> length;//An input to be stored to a varible

	if (cin.fail())
	{
		system("CLS");	//Clears the screen
		cin.clear();	//Clears the cin flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n');	//Tells the program what to ignor

		cout << "Invalid Input. \n";//An output telling the user what to do
		collectLength();
	}
	else if (length < 0)
	{
		system("CLS");	//Clears the screen
		cout << "No negative values. Please try again." << endl;//An output telling the user what to do
		collectLength();
	}
	else
	{}
	
	calcArea();
	calcPerimeter();
}

void Rectangle::calcArea()
{
	area = (length * side);//The algorithm for the shape
	cout << "\nArea: " << area << endl;	//The answer is output
}

void Rectangle::calcPerimeter()
{
	perimeter = ((length * 2) + (side * 2));//The algorithm for the shape
	cout << "Perimeter: " << perimeter << endl;	//The answer is output
	RunAgain.runAgain();// an object to ask the user is they want to use the program again
}


