#include <iostream>
using namespace std;

int SumOfN(int n) {
    int sum;

    sum = n*(n+1)/2;

    return sum;
}

int main()
{
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Result: "<<SumOfN(n);
}