#include<bits/stdc++.h>
using namespace std;
int List[1005][1005];
int chuaxet[1005];
int n,m,k,T;
string ans;
void bfs(int u)
{
	chuaxet[u]=1;
	queue<pair<int,string>>dq;
	dq.push({u,to_string(u)});
	while(!dq.empty())
	{
		pair<int,string>x;
		x=dq.front();
		dq.pop();
		for(int i=1;i<=n;i++)
		{
			if(List[x.first][i]==1&&chuaxet[i]==0)
			{
				chuaxet[i]=1;
				if(i==T)
				{
					ans=x.second+" "+to_string(i);
				}
				dq.push({i,x.second+" "+to_string(i)});
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
		cin>>n>>m>>k>>T;
		for(int i=1;i<=m;i++)
		{
			int u, v;
			cin>>u>>v;
			List[u][v]=1;
			List[v][u]=1;
		}
		bfs(k);
		cout<<ans<<endl;
	}
}
