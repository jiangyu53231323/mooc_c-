#include <iostream>
#include <array>

// 结构化绑定
int main()
{
    std::array a{1, 2, 3};
    std::array<int, 2> b{4, 5};
    auto [e1, e2, e3] = a;
    std::cout << e1 << " " << e2 << " " << e3 << std::endl;

    auto &[f1, f2, f3]{a};
    f1 = 10;
    std::cout << a[0] << " " << a[1] << " " << a[2];

    return 0;
}