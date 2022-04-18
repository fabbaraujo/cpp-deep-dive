#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, x1, x2;

    cout<<"Enter the numbers: ";
    cin>>a>>b>>c;

    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);

    cout<<"Results: "<<x1<<", "<<x2<<endl;

    return 0;
}