#include<bits/stdc++.h>
using namespace std;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int List[1005][1005];
int n,m;
void dfs(int u,int v)
{
	List[u][v]=0;
	for(int i=0;i<8;i++)
	{
		if(List[u+dx[i]][v+dy[i]]==1)
		{
			dfs(u+dx[i],v+dy[i]);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		memset(List,0,sizeof(List));
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>List[i][j];
			}
		}
		int cnt=0;	
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(List[i][j]==1)
				{
					cnt++;
					dfs(i,j);
				}
			}
		}
		cout<<cnt<<endl;
	}
}
