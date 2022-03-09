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
		ll a[n+5],b[n+2];
		ll y=0;
		for(ll i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int h=1;
		for(ll i=1;i<=n-1;i++)
		{
			cin>>b[i];
			if(a[h]!=b[i])
			{
				cout<<i<<endl;
				h++;
			}
			h++;
		}	
	}
}
