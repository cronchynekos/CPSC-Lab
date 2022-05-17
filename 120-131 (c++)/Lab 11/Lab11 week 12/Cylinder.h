#pragma once
#ifndef CYLINDER_H
#define CYLINDER_H
#include "GeometricShape.h"
class Cylinder : public GeometricalShape
{
private:
	int height;
	int radius;
public:
	Cylinder();//default constructor
	Cylinder(int h, int r, int x, int y, int z);//overloaded constructor
	double calcArea();//getters
	int getRadius();
	int getheight();
};
Cylinder::Cylinder()//default constructor
{
	height = 0;
	radius = 0;
}
Cylinder::Cylinder(int h, int r, int x, int y, int z): GeometricalShape (x, y, z)//overloaded constructor
{
	height = h;
	radius = r;
}
int Cylinder::getheight()//getters
{
	return height;
}
int Cylinder::getRadius()
{
	return radius;
}
double Cylinder::calcArea()
{
	double area = 3.14 * radius * radius * height;
	return area;
}


#endif