#include<bits/stdc++.h>
using namespace std;
int a[1005];
int n,m;
int find(int u)
{
	while(u!=a[u])
	{
		u=a[u];
	}
	return u;
}
int Union(int u,int v)
{
	int x=find(u);
	int y=find(v);
	if(x==y)
	{
		return 1;
	}
	a[y]=x;
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			a[i]=i;
		}
		set<pair<int,int>>Ds;
		for(int i=1;i<=m;i++)
		{
			int u,v;
			cin>>u>>v;
			if(u>v)
			{
				Ds.insert({v,u});
			}
			else{
				Ds.insert({u,v});
			}
		}
		int flag=0;
		for(auto x:Ds)
		{
			if(Union(x.first,x.second)==1)
			{
				flag=1;
			}
		}	
		if(flag==1)
		{
			cout<<"YES\n";	
		}	
		else cout<<"NO\n";
	}
}
