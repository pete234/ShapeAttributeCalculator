#pragma once
#include "NonVertexshapes.h"
class Sphere :
	public NonVertexshapes	//Inheritance
{
public:
	Sphere();	//Constructor
	~Sphere();	//Destructure
	void calcVolume();	//Method declaration
	void collectRadius();	//Method declaration
};

