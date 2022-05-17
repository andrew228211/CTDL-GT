#include<bits/stdc++.h>
using namespace std;
vector<int>List[1005];
int  check[1005];
int danhdau[1005];
int bfs(int u)
{
	queue<int>q;
	q.push(u);
	while(!q.empty())
	{
		int i=q.front();
		q.pop();
		for(auto x:List[i])
		{
			if(danhdau[x]==0) {
				danhdau[x]=danhdau[i]+1;
				q.push(x);
			}		
			else if(danhdau[x]==danhdau[i])
			{
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		memset(List,0,sizeof(List));
		memset(check,0,sizeof(check));
		memset(danhdau,0,sizeof(danhdau));
		for(int i=0;i<m;i++)
		{
			int u,v;
			cin>>u>>v;
			List[u].push_back(v);
			List[v].push_back(u);
		}
		int flag=1;
		for(int i=1;i<=n;i++)
		{
			if(bfs(i)!=1)
			{
				cout<<"NO\n";
				flag=2;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"YES\n";
		}
	}
}

