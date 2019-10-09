#pragma once
#include "VertexShapes.h"
class Cuboid :
	public VertexShapes	//Inheritance
{
public:
	Cuboid();	//Constructor
	~Cuboid();	//Destructure
private:
	double width;	//varible declaration
	bool loopcalc;	//varible declaration
protected:
	double height;	//varible declaration
public:
	void calcVolume();	//Method declaration
	void calcSurfaceArea();	//Method declaration
	void collectLength();	//Method declaration
	void collectWidth();	//Method declaration
	void collectHeight();	//Method declaration
};

