#include <iostream>
using namespace std;

int main()
{
    string s{"hello"};
    // s.clear();
    char arr[]{"world"};
    s += arr;
    s.assign("1024");
    s.append("   ");
    s.append(5, ' ');
    s.insert(0, "    ");
    cout << s << endl;
    s.erase(0, s.find_first_not_of(" \t\n\r"));
    s.erase(s.find_last_not_of(" \t\n\r") + 1);
    // s.append("!");
    int x = std::stoi(s);

    cout << s << endl;
    cout << "x= " << x << endl;

    string s2 = std::to_string(x);
    cout << s2 << endl;
    return 0;
}