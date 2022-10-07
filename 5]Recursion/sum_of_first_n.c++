#include<iostream>
using namespace std;

int fun(int n)
{
    if(n>0)
    {
        return n+fun(n-1);
    }
    return 0;
}
int main()
{
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    int sum=fun(a);
    cout<<sum;
    return 0;
}