#include <iostream>
using namespace std;

int main()
{
    int x=11, y=7, z;
    char a=20, b;

    z=x&y;

    cout<<z<<endl;

    z=x|y;

    cout<<z<<endl;

    z=x^y;

    cout<<z<<endl;

    b=a>>1;

    cout<<(int)b<<endl;

    b=a<<1;

    cout<<(int)b<<endl;

    b=~a;

    cout<<(int)b<<endl;
}