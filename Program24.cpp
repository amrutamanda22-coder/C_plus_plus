#include<iostream>
using namespace std;
int main()
{
    //Nested if-else
    //Finding Greatest of 3 numbers
    int a,b,c;

    cout<<"Enter 1st number:";
    cin>>a;

    cout<<"Enter 2nt number:";
    cin>>b;

    cout<<"Enter 3rd number:";
    cin>>c;

    if(a>b)
    {
        if(a>c)
        cout<<a<<" is Greatest";
        else //c>a
        cout<<c<<" is Greatest";
    }
    else //b>a
    {
        if(b>c)
        cout<<b<<" is Greatest";
        else //c>b
        cout<<c<<" is Greatest";
    }

    return 0;
}