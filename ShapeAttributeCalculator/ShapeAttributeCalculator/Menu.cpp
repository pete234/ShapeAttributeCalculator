#include "stdafx.h"
#include "Menu.h"
#include "Rectangle.h"
#include "Square.h"
#include "Cube.h"
#include "Cuboid.h"
#include "Circle.h"
#include "Sphere.h"
#include "HelpMenu.h"

Menu::Menu()
{
	menuchoice = 0;
}

Menu::~Menu()
{
}

void Menu::shapeSelection()
{
	Rectangle RECobj;	//Instansiation of an object
	Square SQUobj;//Instansiation of an object
	Cube CUBobj;//Instansiation of an object
	Cuboid CUBOobj;//Instansiation of an object
	Circle CIRobj;//Instansiation of an object
	Sphere SPHobj;//Instansiation of an object
	HelpMenu HELobj;//Instansiation of an object
			
	cout << "Welcome to my shape calculator. What would you like to calculate today?\n 1. Circle (Area & Circumfrence)\n 2. Square (Area & Perimeter)\n 3. Rectangle (Area & Perimeter)\n 4. Cube (Volume & Surface Area)\n 5. Cuboid (Volume & Surface Area)\n 6. Sphere (Volume)\n 7. Help\n 8. Exit" << endl;//An output telling the user what to do
	cin >> menuchoice;//An input to be stored to a varible

	system("CLS");	//Clears the screen
	if (cin.fail())
	{
		cin.clear();	//Clears the cin flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n');	//Tells the program what to ignor

		cout << "Invalid Input. \n";//An output telling the user what to do
		shapeSelection();
	}
	else
	{}
	
	switch (menuchoice)
	{
		case 1:
			CIRobj.collectRadius(); // calls a method for the coresponding shape
			break;
		case 2:
			SQUobj.collectLength();// calls a method for the coresponding shape
			break;
		case 3:
			RECobj.collectWidth();// calls a method for the coresponding shape
			break;
		case 4:
			CUBobj.collectValues();// calls a method for the coresponding shape
			break;
		case 5:
			CUBOobj.collectLength();// calls a method for the coresponding shape
			break;
		case 6:
			SPHobj.collectRadius();// calls a method for the coresponding shape
			break;
		case 7:
			HELobj.help(); // calls the metod for the help menu
			break;
		case 8:
			exit(0); // exits the program
		default:
			cout << "Incorrect choice\n" << endl;//An output telling the user what to do
			shapeSelection();
		break;
	}
}