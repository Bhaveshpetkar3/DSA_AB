#include <iostream>
using namespace std;
int main()
{
    int *p=new int[5];
    int *q=new int[10];
    for(int i=0;i<5;i++)cin>>p[i];
    for(int i=0;i<10;i++)q[i]=p[i];
    delete []p;
    p=q;
    q=NULL;
    for(int i=0;i<10;i++)
    {
        cout<<p[i]<<" ";
    }
    return 0;
}