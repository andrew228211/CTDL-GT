#include<bits/stdc++.h>
using namespace std;
int n,m;
int List[1005][1005];
int chuaxet[1005];
string ans;
int Max;
void dfs(int u,int cnt)
{
//	chuaxet[u]=1;
	for(int i=0;i<n;i++)
	{
		if(List[u][i]==1&&List[i][u]==1)
		{
			List[u][i]=0;
			List[i][u]=0;
			dfs(i,cnt+1);
			List[u][i]=1;
			List[i][u]=1;
		}
	}
	Max=max(cnt,Max);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(chuaxet,0,sizeof(chuaxet));
		memset(List,0,sizeof(List));
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			int u,v;
			cin>>u>>v;
			List[u][v]=1;
			List[v][u]=1;
		}
		Max=0;
		for(int i=0;i<n;i++)
		{
			dfs(i,0);
		}
		cout<<Max;
		cout<<endl;
	}
}
