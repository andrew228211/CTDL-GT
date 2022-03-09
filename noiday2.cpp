#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1e9+7;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		priority_queue<ll,vector<ll>,greater<ll> > dq;
		int m;
		for(int i=0;i<n;i++){
			cin>>m;
			dq.push(m);
		}
		ll sum=0;
		while(dq.size()>1)
		{
			ll x=dq.top();
			dq.pop();
			ll y=dq.top();
			dq.pop();
			ll k=(x+y)%mod;
			dq.push(k);
			sum=(sum+k)%mod;
		}
		cout<<sum;
	}
}
