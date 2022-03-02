#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[100005];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		ll cnt=0;
		for(int i=0;i<n-1;i++)
		{
			int x=a[i]+k;
			int c=lower_bound(a,a+n,x)-a;
			c=c-i-1;
			if(c>=1)
			{
				cnt+=c;
			}
//cout<<c<<endl;
		}
		cout<<cnt<<endl;
}
}
