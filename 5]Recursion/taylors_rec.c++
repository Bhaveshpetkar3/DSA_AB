#include<iostream>
using namespace std;
double e(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n>0)
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
    return 1;
}
int main()
{
    int x,n;
    cout<<"Enter the value of x an n";
    cin>>x>>n;
    double w=e(x,n);
    cout<<w;
    return 0;
}