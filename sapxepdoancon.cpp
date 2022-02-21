#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	
		ll n;
		cin>>n;
		ll a[n],Max[n],Min[n],c[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Max[0]=a[0];
		for(int i=1;i<n;i++)
		{
			Max[i]=max(Max[i-1],a[i]);
		}
		Min[n-1]=a[n-1];
		for(int i=n-2;i>=0;i--)
		{
			Min[i]=min(Min[i+1],a[i]);
		}
		int h=0;
		for(int i=0;i<n-1;i++)
		{
			if(Max[i]<=Min[i+1])
			{
				c[h]=i;
				h++;
			}
		}
		cout<<h<<endl;
		for(int i=0;i<h;i++)
		{
			cout<<c[i]+1<<" ";
		}
		cout<<endl;
	}
}
