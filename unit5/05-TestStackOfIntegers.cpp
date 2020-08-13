#include <iostream>
#include <cassert>
#include "05-StackOfIntegers.cpp"

int main(){
    StackOfIntegers s1{};
    for (int i = 0; i < 5; i++)
    {
        s1.push(i + 1);
    }
    std::cout << "stack size = " << s1.getSize() << std::endl;
    std::cout << "top element is: " << s1.peek() << std::endl;
    // s1.getSize()每次for循环都会调用一次，即每出栈一次size都会减小
    const int size = s1.getSize();
    for (int i = 0; i < size; i++)
    {
        std::cout << s1.pop() << " ";
    }
    std::cout << "stack now is empty: " << s1.empty() << std::endl;

    return 0;
}