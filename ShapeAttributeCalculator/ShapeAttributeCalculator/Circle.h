#pragma once
#include "NonVertexshapes.h"
class Circle :
	public NonVertexshapes	//Inheritance
{
public:
	Circle();	//Constructor
	~Circle();	//Destructure
	void collectRadius();	//Method declaration
	void calcCircumfrence();	//Method declaration
	void calcArea();	//Method declaration
private:
	double area;	//varible declaration

};

