#include "02-Circle.h"
#include <iostream>

// void print(Circle c)
// {
//     std::cout << c.getArea() << std::endl;
// }
void print(Circle &c)
{
    std::cout << c.getArea() << std::endl;
}
void print(Circle *c)
{
    std::cout << c->getArea() << std::endl;
}

int main()
{
    Circle ca[]{1.0, 2.0, 3.0};
    print(ca[0]);
    print(ca[1]);
    print(ca + 2);
    return (0);
}
