#include "stdafx.h"
#include "Square.h"
#include "Menu.h"

Square::Square()
{
}

Square::~Square()
{
}

void Square::collectLength()
{
	cout << "What is the length of one of the sides?" << endl;//An output telling the user what to do
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

void Square::calcArea()
{	
	area = (length * length);//The algorithm for the shape
	cout << "\nArea: " << area << endl;	//The answer is output
}

void Square::calcPerimeter()
{
	perimeter = (length * 4);//The algorithm for the shape
	cout << "Perimeter: " << perimeter << endl;//The answer is output
	RunAgain.runAgain();// an object to ask the user is they want to use the program again
}