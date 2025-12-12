#include<iostream>
using namespace std;
int main()
{
    int n;

    //using logical AND operator

    cout<<"Enter a number:";
    cin>>n;
    
    if(n>99 && n<1000)// can use and word
    cout<<n<<" Is a 3 digit number";

    else
    cout<<n<<" Is NOT a 3 digit number";

    return 0;
}