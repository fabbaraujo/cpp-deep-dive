#include <iostream>

using namespace std;

int main()
{
    char x=127;
    
    x++;

    cout<<(int)x<<endl;

    x=-128;

    x--;

    cout<<(int)x<<endl;
}