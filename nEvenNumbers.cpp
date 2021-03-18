#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"how many even number you want?\n";
    cin>>n;
    for (int i = 1; i <= 2 * n; i++)
    {
        if(i % 2 == 0)
        {
            cout<<"\n"<<i;
        }
    }
    return 0;
}