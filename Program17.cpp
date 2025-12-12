#include<iostream>
using namespace std;
int main()
{
    int cp,sp;

    cout<<"Enter Cost price:";
    cin>>cp;

    cout<<"Enter Selling price:";
    cin>>sp;

    if(cp>sp)
    cout<<"Profit is"<<cp-sp;

    else if(cp<sp)
    cout<<"Loss is"<<sp-cp;

    else
    cout<<"No Profit No Loss";

    return 0;
}