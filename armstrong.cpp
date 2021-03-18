#include<iostream>
using namespace std;
int main()
{
    int r, sum = 0, n, org_n;
    cout<<"Enter number:";
    cin>>n;
    org_n = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }
    if (sum == org_n)
    {
        cout<<"Given number is Armstrong!";
    }
    else
    {
        cout<<"Given number is not Armstrong!";
    }
    return 0;
}