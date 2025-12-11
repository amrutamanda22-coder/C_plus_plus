#include<iostream>
using namespace std;
int main()
{
    float p,r,t,SI;

    cout<<"Enter Principal Amount:";
    cin>>p;

    cout<<"Enter Rate (in %):";
    cin>>r;

    cout<<"Enter Time (in years):";
    cin>>t;

    SI = (p*t*r)/100;

    cout<<"Simple Interest:"<<SI<<endl;

    return 0;
}