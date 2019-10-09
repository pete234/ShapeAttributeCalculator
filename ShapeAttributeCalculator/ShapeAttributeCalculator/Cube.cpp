#include "stdafx.h"
#include "Cube.h"


Cube::Cube()
{
}


Cube::~Cube()
{
}

void Cube::collectValues()
{
	cout << "Enter the length of one of the sides" << endl;//An output telling the user what to do
	cin >> length;//An input to be stored to a varible

	if (cin.fail())
	{
		system("CLS");	//Clears the screen
		cin.clear();	//Clears the cin flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n');	//Tells the program what to ignore

		cout << "Invalid Input. \n";//An output telling the user what to do
		collectValues();
	}
	else if (length < 0)
	{
		system("CLS");	//Clears the screen
		cout << "No negative values. Please try again." << endl;//An output telling the user what to do
		collectValues();
	}
	else
	{
	}

	calcSurfaceArea();
	calcVolume();
}

void Cube::calcSurfaceArea()
{
	surfacearea = 6 * (length * length);//The algorithm for the shape
	cout << "\nSurface Area: " << surfacearea << endl;	//The answer is output
}

void Cube::calcVolume()
{
	volume = (length * length * length);//The algorithm for the shape
	cout << "Volume: " << volume << endl;	//The answer is output
	RunAgain.runAgain();// an object to ask the user is they want to use the program again
}