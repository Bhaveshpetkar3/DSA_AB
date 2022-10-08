#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector <int> a1)
{
    int n;
    cout<<"\nEnter the element to be searched in the array: ";
    cin>>n;
    int size=a1.size();
    for(int i=0;i<n;i++)
    {
        if(a1[i]==n)
        {
            return i;
            break;
        }
    }
    return -1;
}
int main()
{
    vector <int> a2;
    int n;
    cout<<"\nEnter the size of the array : ";
    cin>>n;
    int y;
    for(int i=0;i<n;i++)
    {
       
       cin>>y;
       a2.push_back(y);
    }
    int x=binarySearch(a2);
    (x<0) ? cout<<"\nEntered element was not found." : cout<<"\nEntered element was found at "<<x+1<<"th position";
    return 0;
}