#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter any number to print absolute value:";
    cin>>x;

    if(x>=0)
    {
    cout<<x;
    }
    else
    {
    cout<<-(x);
    }
    
    return 0;
}