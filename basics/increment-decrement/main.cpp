#include <iostream>

using namespace std;

int main()
{
    int i=5, j;

    j=i++;

    cout<<i<<" "<<j<<endl;
    //6 5

    i=5;
    j=0;

    j=++i;

    cout<<i<<" "<<j<<endl;
    //6 6
}