#include<iostream>
using namespace std;

void SumOfN(int n) {
    int sum=0;
    
    for(int i=1; i<=n; i++) {
        sum+=i;
    }

    cout<<"Sum N numbers is "<<sum<<endl;
}

int main() {
    SumOfN(9);
}