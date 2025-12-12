#include<iostream>
using namespace std;
int main()
{
    int n;

    //logical OR Operator
    cout<<"Enter a number:";
    cin>>n;

    if(n%5==0 || n%3==0) //(n%15==0)
    cout<<n<<" Is divisible by 3 and 5";

    else
    cout<<n<<" Is NOT divisible by 3 and 5";

    return 0;
}