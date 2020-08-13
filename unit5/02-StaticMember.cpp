#include "Square.h"
#include <iostream>

int Square::numberOfObjects = 10;

int main()
{
    Square s1;
    std::cout << s1.getNumberOfObjects() << std::endl;
    Square s2{20.0};
    std::cout << Square::getNumberOfObjects() << std::endl;
    std::cout << s2.getNumberOfObjectsNoneStatic() << std::endl;
    // std::cout << Square::getNumberOfObjectsNoneStatic() << std::endl;
    return 0;
}