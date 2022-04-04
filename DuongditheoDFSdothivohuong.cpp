#include<bits/stdc++.h>
using namespace std;
int List[1005][1005];
int chuaxet[1005];
int n,m,k,T;
string ans;
void dfs(int u,string s)
{
	chuaxet[u]=1;
	for(int i=1;i<=n;i++)
	{
		if(List[u][i]==1&&chuaxet[i]==0)
		{
			chuaxet[i]=1;
			if(i==T)
			{
				ans=s+" "+to_string(i);
			}
			dfs(i,s+" "+to_string(i));
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(List,0,sizeof(List));
		memset(chuaxet,0,sizeof(chuaxet));
		cin>>n>>m>>k>>T;
		for(int i=1;i<=m;i++)
		{
			int u, v;
			cin>>u>>v;
			List[u][v]=1;
			List[v][u]=1;
		}
		dfs(k,to_string(k));
		cout<<ans<<endl;
	}
}
