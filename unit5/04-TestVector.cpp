#include <iostream>
#include <vector>
#include <string>

#include "Helper.h"

int main(){
    std::vector<std::string> words1{"hello", "world", "welcome", "to", "c++"};
    PRINT(words1);
    words1.erase(words1.end() - 1);
    PRINT(words1);
    words1.push_back("c++!");
    PRINT(words1);
    // 迭代器拷贝创建
    std::vector words2(words1.begin()+2, words1.end());
    PRINT(words2);
    words2.insert(words2.begin(), "hello!");
    PRINT(words2);
    // 拷贝构造创建
    std::vector words3{words2};
    PRINT(words3);
    words3[3] = "cpp";
    PRINT(words3);
    std::vector<std::string> words4{4, "c++!"};
    PRINT(words4);

    return (0);
}