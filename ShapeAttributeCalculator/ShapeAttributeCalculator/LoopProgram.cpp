#include "stdafx.h"
#include "LoopProgram.h"
#include "Menu.h"

LoopProgram::LoopProgram()
{
	runchoice = 0;
}

LoopProgram::~LoopProgram()
{
}

void LoopProgram::runAgain()
{
	Menu MENobj;

	cout << "\nWould you like to use the program again?\n 1. Yes\n 2. No" << endl;//An output telling the user what to do
	cin >> runchoice;//An input to be stored to a varible

	system("CLS");	//Clears the screen
	if (cin.fail())
	{
		cin.clear();	//Clears the cin flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n');	//Tells the program what to ignor

		cout << "Invalid Input. \n";//An output telling the user what to do
		runAgain();
	}
	else
	{}

	switch (runchoice)
	{
	case 1:
		system("CLS");	//Clears the screen
		MENobj.shapeSelection(); // calls the metho shapeSelection
		break;
	case 2:
		exit(0);//exits the program
		break;
	default:
		cout << "Incorrect choice\n" << endl;//An output telling the user what to do
		runAgain();
		break;
	}
}
