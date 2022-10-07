#include<iostream>
using namespace std;
bool deleteele(int arr[],int size)
{
    int n;
    cout<<"\nEnter the index of the element to be deleted : ";
    cin>>n;
    if(n>=size)
    {
        cout<<"\nNot Possible.";
        return false;
    }
    for(int i=n;i<size-1;i++)
    {
        arr[i]=arr[i+1];
        
    }
    return true;
}
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[10];
    int size;
    cout<<"\nEnter the length of the array : ";
    cin>>size;
    for(int i=0;i<size;i++)
        cin>>arr[i];
    if(deleteele(arr,size))display(arr,size-1);
    else display(arr,size);
    return 0;
}