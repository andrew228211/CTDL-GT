#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s,t;
		cin>>s>>t;
		queue<pair<ll,ll> >dq;
		dq.push({s,0});
		ll check[100000];
		memset(check,0,sizeof(check));
		while(!dq.empty())
		{
			pair<ll,ll>x;
			x=dq.front();
			dq.pop();
			if(x.first==t)
			{
				cout<<x.second<<endl;
				break;
			}
			if(check[x.first*2]==0&&x.first<t)
			{
				dq.push({x.first*2,x.second+1});
				check[x.first*2]=1;
			}
			if(check[x.first-1]==0&&x.first-1>0)
			{
				dq.push({x.first-1,x.second+1});
				check[x.first-1]=1;
			}
		}
	}
}
