#include <iostream>
using namespace std;

int pow(int m, int n)
{
    if(n>0)
    {
        return m*pow(m,n-1);
    }
    return 1;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int n=pow(a,b);
    cout<<n;
    return 0;
}