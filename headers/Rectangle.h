#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle: public Shape
{
public:
    Rectangle(int h, int w);
    float getArea();
};

#endif