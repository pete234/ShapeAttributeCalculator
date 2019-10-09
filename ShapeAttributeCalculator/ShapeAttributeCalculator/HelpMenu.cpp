#include "stdafx.h"
#include "HelpMenu.h"
#include "Menu.h"

HelpMenu::HelpMenu()
{
	helpmenuchoice = 0;
}

HelpMenu::~HelpMenu()
{
}

void HelpMenu::help()
{
	Menu MENobj;

	cout << "What do you need help with?\n 1. Calculations\n 2. How the program works\n 3. Back to menu " << endl;//An output telling the user what to do
	cin >> helpmenuchoice;//An input to be stored to a varible

	system("CLS");	//Clears the screen
	if (cin.fail())
	{
		cin.clear();	//Clears the cin flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n');	//Tells the program what to ignor

		cout << "Invalid Input. \n";//An output telling the user what to do
		help();
	}
	else
	{}

	switch (helpmenuchoice)
	{
	case 1:
		calcHelp();	//Case 1 calls the method calcHelp
		break;
	case 2:
		howHelp();	//Case 2 calls the method howHelp
		break;
	case 3:
		MENobj.shapeSelection();	//Case 3 calls the method shapeSelection
	default:
		cout << "Incorrect choice\n" << endl;//An output telling the user what to do
		help();
		break;
	}
}

void HelpMenu::calcHelp()
{
	cout << "On the main menu it will show you in brackets next to the shape what it is going to calculate.\nFor most of the shapes it is calculating two attributes of the shape, so if you only need one of them,\nyou can enter any numerical value for the other. \nThe on screen instructions will tell you the attribute of the shape you will need to enter.\nIt is up to you what unit you decide to put it in as.\n" << endl; //Gives the user help on how to use the program
	cout << "\nThe length of the square is how long is anyone of the sides.\nThe radius of the circle is how long from the central point of the circle to the outside at any point\nThe width of the rectangle is the length of one of the two shorter sides and the length is how long is one of the 2 longer sides\nThe Cubes length is how long is any of the edges on the shape.\nThe Cuboids requires the length and the width like the rectangle, but it also need the height, which is the vertical axis.\nThe Sphere needs the readius which is the same for circle " << endl;
	RunAgain.runAgain();// an object to ask the user is they want to use the program again
}

void HelpMenu::howHelp()
{
	cout << "How the program works is that through pressing the coresponding number to the shape you would like to calculate you \nwill be asked to input a number of different attributes about the shape you choose. Inputting these will allows the \nprogram to calculate the answer for you. \n\nIt will then show the answer on screen with what it calculated next to it. E.g. Volume: 90. \nThe program will then ask you if you would like to use the program again, pressing 1 will take you back to the main \nmenu. Pressing 2 will exit the program." << endl; //gives the user help on how o use he program
	RunAgain.runAgain();// an object to ask the user is they want to use the program again
}