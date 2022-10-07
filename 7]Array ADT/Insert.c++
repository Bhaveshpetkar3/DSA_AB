#include <iostream>
using namespace std;
int insert(int size,int length,int arr[])
{
    int n,x;
    cout<<"Enter the element to be inserted into the array and index  : ";
    cin>>n>>x;
    if(length==size || x>length)
    {
        cout<<"Not Possible";
        return -1;
    }
    for(int i=length;i>x;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[x]=n;
    return 1;
}
void display(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,length=0,size;
    int arr[20];
    size=20;
    cout<<"Enter the length of the array: ";
    cin>>length;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<length;i++)
        cin>>arr[i];
    int a=insert(size,length,arr);
    length=(a>0)? length+1 : length;
    display(arr,length);
    return 0;
}