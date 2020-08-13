#include <iostream>
#include "Date.h"
#include "Employee.h"
int Employee::numberOfObjects = 0;

int main(){
    Employee e1;
    std::cout << e1.toString() << std::endl;
    Employee *e2 = new Employee{"John", Gender::male, Date{1990, 3, 2}};
    std::cout << e2->toString() << std::endl;
    {
        Employee e3{"Alice", Gender::female, {1989, 2, 14}};
        std::cout << e3.toString() << std::endl;
    }
    delete e2;
    e2 = nullptr;
    return (0);
}