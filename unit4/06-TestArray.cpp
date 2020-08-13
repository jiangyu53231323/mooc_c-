#include <array>
#include <iostream>
#include <algorithm>
using std::array;
using std::cout;
using std::endl;

void print(array<int, 3> &a)
{
    for (auto x : a)
    {
        cout << x << "  ";
    }
}
int search(array<int,3>& a,int token){
    bool exist{false};
    int i = 0;
    for(auto element:a){
        if(element==token){
            exist = true;
            break;
        }
        i++;
    }
    if(exist)
        return i;
    else
        return -1;
}
int main()
{
    array a1 = {1, 2, 4}; //array<int,3>
    print(a1);
    cout << endl;
    a1 = {7, 8, 9};
    print(a1);
    cout<<endl;
    array b1{200, 100, 300};
    print(b1);
    a1.swap(b1);
    print(a1);
    print(b1);
    cout << endl;
    cout << a1.size() << endl;
    cout << b1.size() << endl;
    cout << "search 300:" << search(a1, 300) << endl;
    cout << "search 1:" << search(a1, 1) << endl;
    std::sort(a1.begin(), a1.end());
    print(a1);
    std::array<std::array<int,3>, 4> a8;    //二维数组

    return 0;
}