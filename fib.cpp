#include<iostream>
using namespace std;
int main()
{
    int i,n1,n2,gcd=1,lcm=1;
    cout<<"Enter two numbers :\n";
    cin>>n1>>n2;
    int max;
    max = n1 > n2? n1 : n2;
    for ( i = 1; i <= max; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    lcm = (n1 * n2) / gcd;
    cout<<"LCM of two numbers is " <<lcm;
    return 0;
}

