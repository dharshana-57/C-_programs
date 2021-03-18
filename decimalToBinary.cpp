#include<iostream>
using namespace std;
int main()
{
    int arr[30],i,n;
    cout<<"enter number:";
    cin>>n;
    for(i = 0; n > 0; i++)
    {
        arr[i] = n % 2;
        n = n / 2; 
    }
    cout<<"binary form is ";
    for(i = i-1; i >= 0; i--)
    {
        cout<<arr[i];
    }
    return 0;
}