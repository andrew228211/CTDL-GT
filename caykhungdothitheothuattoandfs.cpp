#include<bits/stdc++.h>
using namespace std;
int n,m,k;
vector<pair<int,int>>v;
vector<int>List[1005];
int chuaxet[1005];
void dfs(int u)
{
	chuaxet[u]=1;
	for(auto x:List[u])
	{
		if(chuaxet[x]==0)
		{
			v.push_back({u,x});
			dfs(x);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		memset(chuaxet,0,sizeof(chuaxet));
		for(int i=0;i<=n;i++)
		{
			List[i].clear();
		}
		v.clear();
		for(int i=1;i<=m;i++)
		{
			int u,v;
			cin>>u>>v;
			List[u].push_back(v);
			List[v].push_back(u);
		}
		dfs(k);
		if(v.size()==n-1)
		{
			for(auto x:v)
			{
				cout<<x.first<<" "<<x.second<<endl;
			}
		}
		else{
			cout<<-1<<endl;
		}
	}
}
