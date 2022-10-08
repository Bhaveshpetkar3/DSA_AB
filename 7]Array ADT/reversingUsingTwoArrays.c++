#include <bits/stdc++.h>
using namespace std;
vector <int> &reverse(vector <int> &arr)
{
    int x;
    int size=arr.size();
    vector <int> ar1;
    for(int i=size-1;i>=0;i--)
    {
        x=arr[i];
        ar1.push_back(x);
        
    }
    arr.clear();
    for(int i=0;i<size;i++)
    {
        x=ar1[i];
        arr.push_back(x);
    }
    
    return arr;
}
int main()
{
    int n,x;
    vector <int> arr;
    vector <int> ar2;
    cout<<"\nEnter the number of elements in the array : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    ar2 = reverse(arr);
    for(int i=0;i<n;i++)
    {
        cout<<ar2[i]<<" ";
    }
    return 0;
}