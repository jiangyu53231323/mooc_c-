#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // 常量声明
    const int x = 42;
    // 常量不可变
    // x = 21;
    // 常量指针所指数据不变
    int y = 2;
    const int *p = &x;
    // (*p) = 24;
    const int *q = &y;
    // (*q) = 4;
    // 指针常量不可变
    int *const r = &y;
    int z = 5;
    // r = &z;
    (*r) = 20;
    cout << (*r) << ' ' << y << endl;
    // 常指针常量
    const int *const s = &y;
    // s = &z;

    const char *str = "Hello";
    // *str = 'p';
    // cout << *str << endl;

    auto p1 = &y;
    auto p2 = "World";
    auto const p3 = "!";
    return 0;
}