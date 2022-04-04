#include<bits/stdc++.h>
using namespace std;
int List[1005][1005];
int n,m;
int chuaxet[1005];
void bfs(int u)
{
	chuaxet[u]=1;
	queue<int>dq;
	dq.push(u);
	while(!dq.empty())
	{
		int s=dq.front();
		dq.pop();
		for(int i=1;i<=n;i++)
		{
			if(List[s][i]==1&&chuaxet[i]==0)
			{
				chuaxet[i]=1;
				dq.push(i);
			}
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
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			int u,v;
			cin>>u>>v;
			List[u][v]=1;
			List[v][u]=1;
		}
		int cnt=0;
		for(int i= 1;i<=n;i++)
		{
			if(chuaxet[i]==0)
			{
				cnt++;
				bfs(i);
			}
		}
		cout<<cnt<<endl;
	}
}
