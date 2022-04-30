#include<iostream>
using namespace std;

void CheckAge(int age) {
  if(age>=12 && age<=50)
        cout<<"young";
    else
        cout<<"not young";
}

int main() {
    CheckAge(25);
}