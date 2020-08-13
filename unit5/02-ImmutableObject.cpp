#include <iostream>
#include "Date.h"
#include "Employee.h"

int main(){
    Employee e;
    e.setBirthday(Date(1999, 1, 1));
    std::cout << e.toString() << std::endl;
    e.getbirthday()->setYear(1998);
    std::cout << e.toString() << std::endl;
    
    return 0;
}