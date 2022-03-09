#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a,a+n,greater<int>());
		sort(b,b+n);
		ll x=0;
		for(int i=0;i<n;i++)
		{
			x+=a[i]*b[i];
		}
		cout<<x<<endl;
	}
}
