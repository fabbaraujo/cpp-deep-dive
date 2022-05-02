#include<iostream>
using namespace std;

void DisplayDigits(int n) {
    int r=0, m=n, sum=0;

    while(n>0) {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }

    if(sum==m) cout<<"its Armstrong";
    else cout<<"not Armstrong";
}

int main() {
    DisplayDigits(153);
}