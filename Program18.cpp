#include<iostream>
using namespace std;
int main()
{
    int l,b,area,perimeter;

    cout<<"Enter Length:";
    cin>>l;

    cout<<"Enter Breadth:";
    cin>>b;

    area=l*b;
    perimeter=2*(l+b);

    if(area>perimeter)
    cout<<"Area is greater than Perimeter";

    else if(area<perimeter)
    cout<<"Area is less than Perimeter";

    else
    cout<<"Area is equal to Perimeter";

    return 0;
}