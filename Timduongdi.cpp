#include<bits/stdc++.h>
using namespace std;
int List[1005][1005];
int chuaxet[1005];
int n,m;
void dfs(int u)
{
	stack<int>st;
	st.push(u);
	chuaxet[u]=1;
	while(!st.empty())
	{
		int s=st.top();
		st.pop();
		for(int i=1;i<=n;i++)
		{
			if(List[s][i]==1&&chuaxet[i]==0)
			{
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
		memset(List,0,sizeof(List));
		memset(chuaxet,0,sizeof(chuaxet));
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			int u, v;
			cin>>u>>v;
			List[u][v]=1;
			List[v][u]=1;
		}
		int q;
		cin>>q;
		while(q--)
		{
			memset(chuaxet,0,sizeof(chuaxet));
			int x,y;
			cin>>x>>y;
			dfs(x);
			if(chuaxet[y]==1) cout<<"YES";
			else cout<<"NO";
			cout<<endl;
		}
	}
}
