#include<iostream>
using namespace std;
int main()
{
    cout<<4<<"\n";
    cout<<"4\n";
    cout<<4+3<<"\n";
    cout<<"4+3\n";

    int x ; //declaration
    x = 5; //intialization
    int y = 9;

    cout<<x<<"\n";
    cout<<"x\n";
    cout<<x+8<<"\n";
    cout<<x+y<<"\n";
    cout<<x*y<<"\n";

    cout<<x<<endl;
    x = 8;
    cout<<x<<endl;
    x = x + 2;
    cout<<x<<endl;
    x = x - 8;
    cout<<x<<endl;
    x = x * 10;
    cout<<x<<endl;

    //Arthemetic Operations

    int a = 5,b = 4;

    cout<<a + b<<endl;
    cout<<a - b<<endl;
    cout<<a * b<<endl;
    cout<<a / b<<endl;
    
    float p = 7,q = 2;

    cout<<p<<endl;
    cout<<q<<endl;

    cout<<p + q<<endl;
    cout<<p - q<<endl;
    cout<<p * q<<endl;
    cout<<p / q<<endl;

    //Modulus Operator
    //a % b = a if a<b
    //a % a = o
    //a % (-b) = a % b
    //(-a) % b = -(a % b)
    //a % b = 0 it means a is divisible by a
    return 0;
}