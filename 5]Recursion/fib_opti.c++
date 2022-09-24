#include <iostream>
using namespace std;
int arr[10];
int fib(int n)
{
    if(n<=1)
    {
        arr[n]=n;
        return n;
    }
    if (arr[n-2]==-1)
        arr[n-2]=fib(n-2);
    if(arr[n-1]==-1)
        arr[n-1]=fib(n-1);
        arr[n]=arr[n-2]+arr[n-1];
    return arr[n-2]+arr[n-1];
}
int main()
{
    for(int i=0;i<10;i++)arr[i]=-1;
    int t;
    cin>>t;
    int n=fib(t);
    cout<<n;
    return 0;
}