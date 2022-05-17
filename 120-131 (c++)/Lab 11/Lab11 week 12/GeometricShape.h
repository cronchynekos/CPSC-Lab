#pragma once
#ifndef GEOMETRICALSHAPE_H
#define GEOMETRICALSHAPE_H

class GeometricalShape//base class
{
private:
    int xPosition;
    int yPosition;
    int zPosition;
public:
    GeometricalShape();//default constructor
    GeometricalShape(int x, int y, int z);//overloaded constructor
    int getXPos();//getters
    int getYPos();
    int getZPos();
};
GeometricalShape::GeometricalShape()//default constructor
{
    xPosition = 0;
    yPosition = 0;
    zPosition = 0;
}
GeometricalShape::GeometricalShape(int x, int y, int z)//overloaded constructor
{
    xPosition = x;
    yPosition = y;
    zPosition = z;
}
int GeometricalShape::getXPos()//getters
{
    return xPosition;
}
int GeometricalShape::getYPos()
{
    return yPosition;
}
int GeometricalShape::getZPos()
{
    return zPosition;
}

#endif