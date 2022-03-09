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
		int k;
		priority_queue<ll,vector<ll>,greater<ll> >dq;
		for(int i=0;i<n;i++)
		{
			cin>>k;
			dq.push(k);
		}
		int sum=0;
		while(dq.size()>1)
		{
			int x=dq.top();
			dq.pop();
			int y=dq.top();
			dq.pop();
			int k=x+y;
			dq.push(k);
			sum=sum+k;
		}
		cout<<sum<<endl;
	}
}
