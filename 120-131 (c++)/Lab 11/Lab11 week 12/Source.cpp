//Nathanael Kim Lab 11

#include <iostream>
#include "GeometricShape.h"//includes all the class and subclass files
#include "Cylinder.h"
#include "RectangularBox.h"
#include "Sphere.h"
using namespace std;

int main()
{
    cout << "Creating Objects with default constructors!" << endl;
    shared_ptr<Sphere> s(make_shared<Sphere>());//Default constructors
    shared_ptr<Cylinder> c(make_shared<Cylinder>());
    shared_ptr<RectangularBox> r(make_shared<RectangularBox>());
    cout << "Sphere info:" << endl;//print info
    cout << "The center coordinate is at x: " << s->getXPos() << " y: " << s->getYPos() << " z: " << s->getZPos() << endl;
    cout << "Dimensions - Radius: " << s->getRadius() << endl;
    cout << "The volume is " << s->calcArea() << endl;
    cout << "Rectangular Box info:" << endl;
    cout << "The center coordinate is at x: " << r->getXPos() << " y: " << r->getYPos() << " z: " << r->getZPos() << endl;
    cout << "Dimensions - Height: " << r->getheight() << ", Length: " << r->getlength() << ", Width: " << r->getwidth() << endl;
    cout << "The volume is " << r->calcArea() << endl;
    cout << "Cylinder info:" << endl;
    cout << "The center coordinate is at x: " << c->getXPos() << " y: " << c->getYPos() << " z: " << c->getZPos() << endl;
    cout << "Dimensions - Height: " << c->getheight() << ", Radius: " << c->getRadius()  << endl;
    cout << "The volume is " << c->calcArea() << endl << endl;

    cout << "Creating Objects with Overloaded constructors!" << endl;
    shared_ptr<Sphere> s2(make_shared<Sphere>(3.5, 1, 1, 1));//overloaded constructors
    shared_ptr<Cylinder> c2(make_shared<Cylinder>(5, 10, 2, 2, 2));
    shared_ptr<RectangularBox> r2(make_shared<RectangularBox>(1, 2, 3, 3, 3, 3));
    cout << "Sphere info:" << endl;//print info
    cout << "The center coordinate is at x: " << s2->getXPos() << " y: " << s2->getYPos() << " z: " << s2->getZPos() << endl;
    cout << "Dimensions - Radius: " << s2->getRadius() << endl;
    cout << "The volume is " << s2->calcArea() << endl;
    cout << "Rectangular Box info:" << endl;
    cout << "The center coordinate is at x: " << r2->getXPos() << " y: " << r2->getYPos() << " z: " << r2->getZPos() << endl;
    cout << "Dimensions - Height: " << r2->getheight() << ", Length: " << r2->getlength() << ", Width: " << r2->getwidth() << endl;
    cout << "The volume is " << r2->calcArea() << endl;
    cout << "Cylinder info:" << endl;
    cout << "The center coordinate is at x: " << c2->getXPos() << " y: " << c2->getYPos() << " z: " << c2->getZPos() << endl;
    cout << "Dimensions - Height: " << c2->getheight() << ", Radius: " << c2->getRadius() << endl;
    cout << "The volume is " << c2->calcArea() << endl << endl;
    return 0;
}
