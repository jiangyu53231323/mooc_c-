#include "02-Circle.h"
#include <iostream>

Circle::Circle()
{
    radius = 1.0;
}
Circle::Circle(double r)
{
    radius = r;
}
double Circle::getArea()
{
    return (3.14 * radius * radius);
}
double Circle::getRadius() const
{
    return radius;
}
// void Circle::setRadius(double radius)
// {
//     this->radius = radius;
// }
Circle& Circle::setRadius(double radius)
{
    this->radius = radius;
    return (*this);
}
