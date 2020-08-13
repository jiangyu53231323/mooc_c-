#include <iostream>
#include <typeinfo>
using std::cin;
using std::cout;
using std::endl;

auto max(int x, int y)
{
    return x > y ? x : y;
}

int fun1() { return 10; }
auto fun2() { return 'g'; } // c++14

int main()
{
    // auto 变量必须在定义时初始化
    auto x = 3;
    auto y{42};
    // 定义在一个auto序列的变量必须始终推导成同一类型
    auto x1{1}, x2{2};
    // 如果初始化表达式是引用或const，则去除引用或const语义。
    int y1{42}, &y2{y1};
    auto y3{y2};
    cout << typeid(y3).name() << endl;
    //  如果auto关键字带上&号，则不去除引用或const语意
    auto &z1{y2};
    cout << typeid(z1).name() << endl;
    // 初始化表达式为数组时，auto关键字推导类型为指针。
    int p[3]{1, 2, 3};
    auto p1 = p;
    cout << typeid(p1).name() << endl;
    // 若表达式为数组且auto带上&，则推导类型为数组类型。
    auto &p2{p};
    cout << typeid(p2).name() << endl;
    // 若表达式为数组且auto带上&，则推导类型为数组类型。
    cout << max(x1, x2) << endl;

    decltype(fun1()) f1;
    decltype(fun2()) f2 = fun2();
    cout << typeid(f1).name() << endl;
    cout << typeid(f2).name() << endl;

    return 0;
}