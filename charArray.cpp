#include <iostream>
using namespace std;

int main()
{
    char ch[7] = "Kratik";

    // attention here
    cout << ch << endl;
    char *c = &ch[0];
    cout<<&ch<<endl;

    // prints entire string
    cout << c << endl;
    char temp = 'z';

    char *p = &temp;
    cout << p << endl;

    return 0;
}