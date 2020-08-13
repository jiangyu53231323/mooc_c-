#include <iostream>
#include "Employee.h"
#include "Date.h"

int Employee::numberOfObjects = 0;
int main(){
    Employee e1{"alex", Gender::male, {1999, 5, 1}};
    Employee e2{e1};
    std::cout << e1.toString() << std::endl;
    std::cout << e2.toString() << std::endl;

    return (0);
}