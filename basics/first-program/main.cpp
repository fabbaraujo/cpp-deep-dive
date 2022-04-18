#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cin.ignore(1000,'\n');

    c=a+b;

    cout<<"Sum is "<<c;

    string str;

    cout<<"\n\nMay i know your name: ";
    //cin>>str;
    getline(cin, str);

    cout<<"Hello "<<str;

    return 0;
}