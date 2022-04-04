#include<bits/stdc++.h>
using namespace std;
int List[1005][1005];
int chuaxet[1005];
int n,m,k;
void bfs(int u)
{
	queue<int>dq;
	dq.push(u);
	chuaxet[u]=1;
	while(!dq.empty())
	{
		int s=dq.front();
		cout<<s<<" ";
		dq.pop();
		for(int i=1;i<=n;i++)
		{
			if(List[s][i]==1&&chuaxet[i]==0)
			{
				dq.push(i);
				chuaxet[i]=1;
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
		cin>>n>>m>>k;
		memset(List,0,sizeof(List));
		memset(chuaxet,0,sizeof(chuaxet));
		for(int i=0;i<m;i++)
		{
			int u,v;
			cin>>u>>v;
			List[u][v]=1;
		}
		bfs(k);
		cout<<endl;
	}
}
