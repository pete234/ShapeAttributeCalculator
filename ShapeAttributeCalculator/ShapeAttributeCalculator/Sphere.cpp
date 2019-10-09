#include "stdafx.h"
#include "Sphere.h"


Sphere::Sphere()
{
}


Sphere::~Sphere()
{
}

void Sphere::collectRadius()
{
	cout << "Enter the radius of the Sphere" << endl;//An output telling the user what to do
	cin >> radius; //An input to be stored to a varible

	if (cin.fail())
	{
		system("CLS");	//Clears the screen
		cin.clear();	//Clears the cin flag
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
	{
	}

	calcVolume();
}

void Sphere::calcVolume()
{
	volume = 4 * ((pi * (radius * radius * radius))/3);//The algorithm for the shape
	cout << "Volume: " << volume << endl;	//The answer is output
	RunAgain.runAgain();// an object to ask the user is they want to use the program again
}