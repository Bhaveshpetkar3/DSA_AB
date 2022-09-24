#include<iostream>
using namespace std;
int b[5]={4};
int main()
{
    int a[5]={1};
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
        cout<<b[i]<<" ";
    }
    return 0;
}