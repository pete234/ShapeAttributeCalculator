#include "stdafx.h"
#include "Cuboid.h"


Cuboid::Cuboid()
{
	width = 0.0; //Declared varible being given a value
	height = 0.0;//Declared varible being given a value
	loopcalc = false;//Declared varible being given a value
}

Cuboid::~Cuboid()
{
}

void Cuboid::collectLength()
{
	cout << "Enter the length of the cuboid" << endl;//An output telling the user what to do
	cin >> length;//An input to be stored to a varible

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
	collectWidth();
}

void Cuboid::collectWidth()
{
	cout << "Enter the width of the cuboid" << endl;//An output telling the user what to do
	cin >> width;	//An input to be stored to a varible

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
	collectHeight();
}

void Cuboid::collectHeight()
{
	cout << "Enter the height of the cuboid" << endl;//An output telling the user what to do
	cin >> height;//An input to be stored to a varible

	if (cin.fail())
	{
		system("CLS");	//Clears the screen
		cin.clear();	//Clears the cin flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n');	//Tells the program what to ignor

		cout << "Invalid Input. \n";//An output telling the user what to do
		collectHeight();
	}
	else if (length < 0)
	{
		system("CLS");	//Clears the screen
		cout << "No negative values. Please try again." << endl;//An output telling the user what to do
		collectHeight();
	}
	else
	{
	}

	calcVolume();
	calcSurfaceArea();
}

void Cuboid::calcVolume()
{
	volume = (length * width * height);//The algorithm for the shape
	cout << "\nVolume: " << volume << endl;	//The answer is output
}

void Cuboid::calcSurfaceArea()
{
	surfacearea = 2 * ((length * width) + (width * height) + (height * length));//The algorithm for the shape
	cout << "Surface Area: " << surfacearea << endl;	//The answer is output
	RunAgain.runAgain();// an object to ask the user is they want to use the program again
}





