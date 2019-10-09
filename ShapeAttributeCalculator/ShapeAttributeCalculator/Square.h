#pragma once
#include "Shapes2D.h"
class Square :
	public Shapes2D	//Inheritance
{
public:
	Square();	//Constructor
	~Square();	//Destructure
	void calcArea();	//Method declaration
	void calcPerimeter();	//Method declaration
	void collectLength();	//Method declaration
	
};

