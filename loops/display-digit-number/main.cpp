#include<iostream>
using namespace std;

void DisplayDigits(int n) {
    int r=0;

    while(n>0) {
        r=n%10;
        n=n/10;

        cout<<r<<endl;
    }
}

int main() {
    DisplayDigits(1724);
}