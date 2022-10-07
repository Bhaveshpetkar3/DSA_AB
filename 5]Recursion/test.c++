#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,cnte=0cnto=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]%2!=0)cnto++;
            else cnte++;
	    }
	    if(cnto%2==0)cout<<1<<"\n";
        else cout<<2<<"\n";
	}
	return 0;
}
