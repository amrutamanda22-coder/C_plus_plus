#include<iostream>
using namespace std;
int main()
{
    //Nested if-else
    //Finding youngest age of 3 people

    int ram,shyam,ajay;

    cout<<"Enter age of Ram:";
    cin>>ram;

    cout<<"Enter age of Shyam:";
    cin>>shyam;

    cout<<"Enter age of Ajay:";
    cin>>ajay;

    if(ram<shyam)
    {
        if(ram<ajay)
        cout<<"Ram is Youngest";
        else //ajay<ram
        cout<<"Ajay is Youngest";
    }
    else //shayam<ram
    {
        if(shyam<ajay)
        cout<<"Shayam is Youngest";
        else //ajay<shayam
        cout<<"Ajay is Youngest";
    }

    return 0;
}