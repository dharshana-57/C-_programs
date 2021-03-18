#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter 3 numbers:";
    cin>>n1>>n2>>n3;
    if(n1 > n2 && n1 > n3)
    {
        cout<<"largest number is " <<n1;
    }
    else if(n2 > n1 && n2 > n3)
    {
        cout<<"largest number is " <<n2;
    }
    else if(n3 > n2 && n3 > n1)
    {
        cout<<"largest number is " <<n3;
    }
    else
    {
        cout<<"invalid or entered numbers are same!";
    }
    return 0;
}