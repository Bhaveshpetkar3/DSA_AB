#include <iostream>
using namespace std;
int* reverse(int arr[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    return arr;
} 
int main()
{
    int n;
    cout<<"\nEnter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int* fun=reverse(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<fun[i]<<" ";
    }

}