#include <bits/stdc++.h>
using namespace std;
int BinarySearch(vector <int> arr,int beg,int end,int p)
{
    if(end>=beg)
    { 
    int mid=(beg+end)/2;
    if(arr[mid]==p)
        return mid;
    if(arr[mid]<p)
        return BinarySearch(arr,mid+1,end,p);   
    return BinarySearch(arr,beg,mid-1,p);
    }
    return -1;
}
int main()
{
    int n,x;
    vector <int> arr;
    cout<<"\nEnter the number of elements : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    
    int p;
    cout<<"\nEnter the element to be searched : ";
    cin>>p;
    int u=BinarySearch(arr,0,n-1,p);
    (u<0)? cout<<"\nElement was not found. " : cout<<"\nElement was found at "<<u+1<<"th position";
}