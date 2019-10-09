#pragma once
#include "Shapes2D.h"
class Rectangle :
	public Shapes2D	//Inheritance
{
public:
	Rectangle();	//Constructor
	~Rectangle();		//Destructure
	void calcArea();			//Method declaration
	void calcPerimeter();	//Method declaration
	void collectWidth();	//Method declaration
	void collectLength();	//Method declaration
};

