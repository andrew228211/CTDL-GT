#include<bits/stdc++.h>
using namespace std;
int List[1005][1005];
int chuaxet[1005];
int n,m,k,T;
string ans;
void bfs(int u,string s)
{
	queue<pair<int,string>>dq;
	dq.push({u,to_string(u)});
	chuaxet[u]=1;
	while(!dq.empty())
	{
		pair<int,string>x;
		x=dq.front();
		dq.pop();
		for(int i=1;i<=n;i++)
		{
			if(List[x.first][i]==1&&chuaxet[i]==0)
			{
				dq.push({i,x.second+" "+to_string(i)});
				chuaxet[i]=1;
				if(i==T)
				{
					ans=x.second+" "+to_string(i);
				}
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
		cin>>n>>m>>k>>T;
		memset(List,0,sizeof(List));
		memset(chuaxet,0,sizeof(chuaxet));
		ans.clear();
		for(int i=0;i<m;i++)
		{
			int u,v;
			cin>>u>>v;
			List[u][v]=1;
		}
		bfs(k,to_string(k));
		if(chuaxet[T]==0)
		{
			cout<<-1;
		}
		else cout<<ans;
		cout<<endl;
		
	}
}


