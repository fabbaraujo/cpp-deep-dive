#include<iostream>
using namespace std;

void Sign(int n) {
    if(n>=0)
        cout<<"positive";
    else
        cout<<"negative";
}

int main() {
    Sign(2);
}