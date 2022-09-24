#include<iostream>
using namespace std;
int pow(int m, int n)
{
    if (n==0)
        return 1;
    if(n%2==0)
        return pow(m*m,n/2);
    return m*pow(m*m,(n-1)/2);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int n=pow(a,b);
    cout<<n;
    return 0;
}