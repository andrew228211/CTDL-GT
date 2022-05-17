#include<bits/stdc++.h>
using namespace std;
int n,m;
int find(int x,int parent[])
{
	while(x!=parent[x])
	{
		x=parent[x];
	}
	return x;
}
void Union(int x,int y,int parent[])
{
	int a=find(x,parent);
	int b=find(y,parent);
	parent[b]=a;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int parent[n+5];
		for(int i=1;i<=n;i++)
		{
		    parent[i]=i;
		}
		for(int i=0;i<m;i++)
		{
			int u,v;
			cin>>u>>v;
			if(u>v)
			{
				Union(v,u,parent);
			}		
			else {
				Union(u,v,parent);
			}
		}
		int dem=0;
		for(int i=1;i<=n;i++)
		{
			if(parent[i]==i)
			{
				dem++;		
			}		
		}		
		if(dem==1)
		{
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}	
}
