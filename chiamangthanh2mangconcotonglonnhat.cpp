#include<bits/stdc++.h>
using namespace std;
int mode=1e9+7;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int x=0,y=0;
		k=min(k,n-k);
		for(int i=0;i<k;i++)
		{
			x+=a[i];
		}
			for(int i=k;i<n;i++)
		{
			y+=a[i];
		}
		cout<<y-x<<endl;
	}
}
