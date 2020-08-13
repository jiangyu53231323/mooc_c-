#include "Square.h"
#include <iostream>

int Square::numberOfObjects = 0;
int main()
{
    Square s1{10.0};
    std::cout << "squares: " << Square::getNumberOfObjects() << std::endl;
    // 拷贝构造
    Square s2{s1};
    std::cout << "squares: " << Square::getNumberOfObjects() << std::endl;
    Square *s3 = new Square{s1};
    std::cout << "squares: " << Square::getNumberOfObjects() << std::endl;
    std::cout << "s3's area is " << s3->getArea() << std::endl;
    delete s3;
    std::cout << "squares: " << Square::getNumberOfObjects() << std::endl;

    return (0);
}