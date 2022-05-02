#include<iostream>
using namespace std;

void Gcd(int n, int m) {
    while(m!=n) {
        if(m>n)
            m-=n;
        else if(n>m)
            n-=m;
    }
    cout<<"GCD is "<<m;
}

int main() {
    Gcd(21, 35);
}