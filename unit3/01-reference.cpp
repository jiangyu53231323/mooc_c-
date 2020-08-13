#include <iostream>

using std::cout;
using std::endl;

//pass by value
void swap(int x,  int y){
    int t;
    t=x;  
    x=y;  
    y=t;
}
//pass by pointer
void swap2(int* x,  int* y){
    int t;
    t=*x;  
    *x=*y;  
    *y=t;
}
//pass by reference
void swap3(int& x,  int& y){
    int t;
    t=x;  
    x=y;  
    y=t;
}
int main() {
    int a=5, b{10};
    cout << "Before: a=" << a << " b=" << b << endl;
    swap( a,  b );
    cout << "After:  a=" << a << " b=" << b << endl;
    swap2( &a,  &b );
    cout<< "After: a=" << a << "b=" << b << endl;
    swap3( a,  b );
    cout << "After: a=" << a << "b=" << b << endl;
    return 0;
}


