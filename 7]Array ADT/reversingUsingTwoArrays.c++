#include <bits/stdc++.h>
using namespace std;
vector <int> &reverse(vector <int> &arr)
{
    int size=arr.size();
    vector <int> ar1;
    for(int i=size-1;i>=0;i--)
    {
        ar1.push_back(arr[i]);
    }
    arr.clear();
    for(int i=0;i<size;i++)
    {
        
        arr.push_back(ar1[i]);
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