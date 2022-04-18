#include <iostream>
using namespace std;

int main()
{
    int u, v, a;
    float distance;

    cin>>u>>v>>a;

    distance=(float)(v*v-u*u)/(2*a);

    cout<<"Distance is "<<distance<<endl;

    return 0;
}
