#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"Enter 3 sides of a triangle:";
    cin>>a;
    cin>>b;
    cin>>c;

    if ((a+b)>c && (b+c)>a && (c+a)>b)
    cout<<"VALID Triangle";

    else
    cout<<"NOT VALID Triangle";

    return 0;
}