#include "../headers/Rectangle.h"

Rectangle::Rectangle(int h, int w): Shape(h, w){}

float Rectangle::getArea()
{
    return (this->height * this->width);
}
