#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n+5];
		int d=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==k)
			{
			    d=1;
			    cout<<i;
			}
		}
	    if(d==0) cout<<"NO";
		cout<<endl;
	}
}

