#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle: public Shape
{
public:
    Triangle(int h, int w);
    float getArea();
};

#endif