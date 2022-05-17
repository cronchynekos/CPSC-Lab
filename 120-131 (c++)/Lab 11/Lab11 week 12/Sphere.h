#pragma once
#ifndef SPHERE_H
#define SPHERE_H
#include "GeometricShape.h"
class Sphere : public GeometricalShape
{
private:
	double radius;
public:
	Sphere();//default constructor
	Sphere(double r, int x, int y, int z);//overloaded constructor
	double calcArea();//getters
	double getRadius();
};
Sphere::Sphere()//default constructor
{
	radius = 0;
}
Sphere::Sphere(double r, int x, int y, int z) : GeometricalShape(x, y, z)//overloaded constructor
{
	radius = r;
}
double Sphere::calcArea()//getters
{
	double area = 3 / 4 * 3.14 * radius;
	return area;
}
double Sphere::getRadius()
{
	return radius;
}


#endif