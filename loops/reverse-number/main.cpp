#include<iostream>
using namespace std;

void Reverse(int n) {
    int r, rev=0;

    while(n>0) {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }

    cout<<rev<<endl;
}

int main() {
    Reverse(1724);
}