#include <iostream>

using namespace std;

int main()
{
    float basic, percentAllow;
    float percentDeduct, netSalary;

    cout<<"Enter basic salary: ";
    cin>>basic;

    cout<<"Enter percent of allowences: ";
    cin>>percentAllow;

    cout<<"Enter percent of deductions: ";
    cin>>percentDeduct;

    netSalary=basic+basic*percentAllow/100-basic*percentDeduct/100;

    cout<<"Net salary is: "<<netSalary<<endl;
}