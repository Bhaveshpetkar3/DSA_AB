#include <iostream>
using namespace std;

void fun(int x)
{
    if(x>0)
    {
        
        fun(x-1);
        cout<<x<<"\n";
    }
}
int main()
{
    int n=3;
    fun(3);
    return 0;
}