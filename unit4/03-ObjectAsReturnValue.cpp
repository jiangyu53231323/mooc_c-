#include <iostream>
#include "02-Circle.h"
// #include "02-Circle.cpp"

int main(){
    Circle c{1.0};
    std::cout << c.setRadius(2.0).setRadius(3.0).getArea() << std::endl;
    std::cout << c.getArea() << std::endl;
    return 0;
}