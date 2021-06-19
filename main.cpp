#include <iostream>

#include "headers/Triangle.h"
#include "headers/Rectangle.h"

int main(int argc, char const *argv[])
{
    Triangle *tr = new Triangle(2, 5);
    Rectangle *re = new Rectangle(2, 5);

    std::cout << tr->getArea() << '\n';
    std::cout << re->getArea() << '\n';

    return 0;
}
