#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,cnt=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]%2!=0)cnt++;
	    }
	    if(cnt==0)cout<<1<<"\n";
        else if(cnt%2==0)cout<<2<<"\n";
        else cout<<1<<"\n";
	}
	return 0;
}
