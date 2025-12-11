#include<iostream>
using namespace std;
int main()
{
    float r,PI = 3.141592,a;

    cout<<"Enter Radius:";
    cin>>r;

    a = (4*PI*r*r*r)/3;

    cout<<"Volume of Sphere:"<<a<<endl;

    return 0;
}