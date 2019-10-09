#pragma once
#include "OtherShapes.h"
class NonVertexshapes :
	public OtherShapes	//Inheritance
{
public:	
	NonVertexshapes();	//Constructor
	~NonVertexshapes();	//Destructure
protected:
	double pi;	//varible declaration
	double radius;	//varible declaration
	double circumfrence;	//varible declaration
};

