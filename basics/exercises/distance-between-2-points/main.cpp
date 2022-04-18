#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    float distance;

    cout<<"Enter values of points x and y: ";
    cin>>x1>>x2>>y1>>y2;

    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2*y1));

    cout<<"Distance is: "<<distance<<endl;

    return 0;
}