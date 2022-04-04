#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int List[1005][1005];
int chuaxet[1005];
void dfs(int u)
{
	stack<int>st;
	st.push(u);
	cout<<u<<" ";
	chuaxet[u]=1;
	while(!st.empty())
	{
		int s=st.top();
		st.pop();
		for(int i=1;i<=n;i++)
		{
				if(List[s][i]==1&&chuaxet[i]==0)
				{
					cout<<i<<" ";
					chuaxet[i]=1;
					st.push(s);
					st.push(i);
					break;
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
		for(int i=1;i<=m;i++)
		{
			int u,v;
			cin>>u>>v;
			List[u][v]=1;
			List[v][u]=1;
		}
		dfs(k);
	}
}
