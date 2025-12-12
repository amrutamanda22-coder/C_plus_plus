#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter a number:";
    cin>>n;

    if(n>99 && n<1000)
    cout<<n<<" Is a 3 digit number";

    else
    cout<<n<<" Is NOT a 3 digit number";

    return 0;
}