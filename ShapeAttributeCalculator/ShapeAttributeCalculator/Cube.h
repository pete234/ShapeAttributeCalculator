#pragma once
#include "VertexShapes.h"
class Cube :
	public VertexShapes	//Inheritance
{
public:
	Cube();	//Constructor
	~Cube();	//Destructure
	void calcSurfaceArea();	//Method declaration
	void calcVolume();	//Method declaration
	void collectValues();	//Method declaration
};

