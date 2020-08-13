#include <iostream>
#include <string>
using namespace std;

template <typename T>
auto my_max(T x, T y)
{
    return x > y ? x : y;
}
template <typename T>
auto my_max(T a, T b, T c)
{
    return my_max(a, my_max(b, c));
}
// int i = 100;

int main()
{
    //Variable Scope
    // // int i{100};
    // for (int i = 1; i < 5; i++)
    // {
    //     cout << std::to_string(i) + "##";
    //     cout << endl
    //          << ::i << endl;
    // }

    // Overloading Functions
    cout << my_max(1, 2, 3) << endl;
    cout << my_max('a', 'b', 'A') << endl;
    // Default Arguments

    return 0;
}
