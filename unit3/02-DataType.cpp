#include <iostream>
int main(){
    char s1[] = "aloha";
    char s2[6]{'a', 'l', 'o', 'h', 'a'};
    char s3[]{"aloha"};
    // int x{1.1};
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;

    int f{static_cast<int>(1.234)}; //强制类型转换
    std::cout << f << std::endl;
    return 0;
}