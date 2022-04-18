#include <iostream>
using namespace std;

int main()
{
    int radius, height;
    float volume;

    cin>>radius>>height;
    
    volume=3.14*radius*radius*height;

    cout<<"Volume is "<<volume<<endl;

    return 0;
}