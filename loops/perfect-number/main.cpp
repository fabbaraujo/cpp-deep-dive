#include<iostream>
using namespace std;

void PerfectNumber(int n) {
    int sum=0;

    for(int i=1; i<=n; i++) {
        if(n%i==0)
            sum+=i;
    }

    if(2*n==sum)
		  cout<<"perfect number";
    else
		  cout<<"not a perfect number";	
}

int main() {
    PerfectNumber(6);
}