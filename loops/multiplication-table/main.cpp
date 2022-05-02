#include<iostream>
using namespace std;

void MultiplicationTable(int n) {
    for(int i=0; i<=10; i++) {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}

int main() {
    MultiplicationTable(7);
}