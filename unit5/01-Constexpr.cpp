#include <array>
#include <cassert>
#include <iostream>
using std::cout;
using std::endl;

constexpr int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int x = 3;
    auto f = factorial(x);
    cout << "3!=" << f << endl;
    assert(f == 6);
    return 0;
}