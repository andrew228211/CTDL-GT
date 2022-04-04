#include<bits/stdc++.h>
using namespace std;
int n,m;
int List[1005][1005];
int chuaxet[1005];
int dfs(int u,int v)
{
	stack<int>st;
	st.push(u);
	while(!st.empty())
	{
		int s=st.top();
		st.pop();
		for(int i=1;i<=n;i++)
		{
			if(chuaxet[i]==0&&List[s][i]==1)
			{
				chuaxet[i]=1;
				st.push(s);
				st.push(i);
				if(i==v)
				{
					return 1;
				}
				break;
			}
		}
	}
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		queue<pair<int,int>>dq;
		memset(List,0,sizeof(List));
		for(int i=1;i<=m;i++)
		{
			int u,v;
			cin>>u>>v;
			dq.push({u,v});
			List[u][v]=1;
			List[v][u]=1;	
		}		
		int flag=1;
		pair<int,int>x;
		while(!dq.empty())
		{
			x=dq.front();
			dq.pop();
			memset(chuaxet,0,sizeof(chuaxet));
			List[x.first][x.second]=0;
			List[x.second][x.first]=0;
			if(dfs(x.first,x.second)==1)
			{
				cout<<"YES";
				flag=0;
			}
			if(flag==0)
			{
				break;
			}
			List[x.first][x.second]=1;
			List[x.second][x.first]=1;
		}
		if(flag==1)
		{
			cout<<"NO";
		}
		cout<<endl;
	}
}
