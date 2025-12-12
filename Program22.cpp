#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"Enter 1st number:";
    cin>>a;

    cout<<"Enter 2nt number:";
    cin>>b;

    cout<<"Enter 3rd number:";
    cin>>c;

    //Greatest of 3
    if(a>b && a>c)
    cout<<a<<" is greatest"<<endl;

    else if(b>a && b>c)
    cout<<b<<" is greatest"<<endl;

    else
    cout<<c<<" is greatest"<<endl;

    //Least of 3
    if(a<b && a<c)
    cout<<a<<" is least";

    else if(b<a && b<c)
    cout<<b<<" is least";

    else
    cout<<c<<" is least";

    return 0;
}