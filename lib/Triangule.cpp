#include "../headers/Triangle.h"

Triangle::Triangle(int h, int w): Shape(h, w){};

float Triangle::getArea()
{
    return (this->height * this->width) / 2;
}

