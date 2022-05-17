#pragma once
#ifndef RECTANGULARBOX_H
#define RECTANGULARBOX_H
#include "GeometricShape.h"

class RectangularBox : public GeometricalShape
{
private:
	int height;
	int width;
	int length;
public:
	RectangularBox();//default constructor
	RectangularBox(int h, int w, int l, int x, int y, int z);//overloaded constructor
	double calcArea();//getters
	double getheight();
	double getwidth();
	double getlength();
};
RectangularBox::RectangularBox()//default constructor
{
	height = 0;
	width = 0;
	length = 0;
}
RectangularBox::RectangularBox(int h, int w, int l, int x, int y, int z) : GeometricalShape(x, y, z)//overloaded constructor
{
	height = h;
	width = w;
	length = l;
}
double RectangularBox::calcArea()//getters
{
	int area = height * width * length;
	return area;
}
double RectangularBox::getwidth()
{
	return width;
}
double RectangularBox::getheight()
{
	return height;
}
double RectangularBox::getlength()
{
	return length;
}

#endif