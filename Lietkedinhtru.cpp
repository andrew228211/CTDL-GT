#include<bits/stdc++.h>
using namespace std;
int n,m;
int List[1005][1005];
int chuaxet[1005];
void dfs(int u)
{
	chuaxet[u]=1;
	stack<int>st;
	st.push(u);
	while(!st.empty())
	{
		int s=st.top();
		st.pop();
		for(int i=1;i<=n;i++)
		{
			if(List[s][i]==1&&chuaxet[i]==0)
			{
				st.push(s);
				st.push(i);
				chuaxet[i]=1;
				break;
			}
		}		
	}
}
void in()
{
	for(int i=0;i<=n;i++)
	{
		chuaxet[i]=0;
	}
}
void kt()
{
	for(int i=1;i<=n;i++)
	{
		chuaxet[i]=1;
		int dinh=0;
		if(i==n) dfs(n-1);
		else dfs(i+1);
		for(int j=1;j<=n;j++)
		{
			if(chuaxet[j]==0)
			{
				dinh=1;
				break;
			}
		}
		if(dinh==1)
		{
			cout<<i<<" ";
		}
		in();
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(List,0,sizeof(List));
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			int u,v;
			cin>>u>>v;
			List[u][v]=1;
			List[v][u]=1;
		}
		kt();
		cout<<endl;
	}
}
