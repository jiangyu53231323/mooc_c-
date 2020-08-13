#include <iostream>
#include <cstdlib>

// 猜大小程序
int main()
{
    std::cout << "正在生成0-100间的整数。。。\n";
    std::cout << "请输入你猜测的整数：";
    auto x{0};
    std::cin >> x;
    if (int z = rand() % 100; x > z)
    {
        std::cout << "你猜大了，我的数是" << z << std::endl;
    }
    else if (x < z)
    {
        std::cout << "你猜小了，我的数是" << z << std::endl;
    }
    else
    {
        std::cout << "你猜对了" << std::endl;
    }
    auto y = rand();
    auto h = rand();
    std::cout << y << std::endl;
    std::cout << h << std::endl;
    return (0);
}