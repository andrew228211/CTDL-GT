#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pa pair<int,int>
int n,m,k;
int chuaxet[1005][1005];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};
set<pair<pa,pa>>s;
vector<pair<int,int>>List;
void dfs(pa u)
{
	chuaxet[u.fi][u.se]=1;
	for(int i=0;i<4;i++)
	{
		int x=u.fi+dx[i];
		int y=u.se+dy[i];
		if(chuaxet[x][y]==0&&s.count({u,{x,y}})==0&&x>0&&y>0&&x<=n&&y<=n)
		{
			dfs({x,y});
		}
	}
}
int main()
{
	cin>>n>>m>>k;
	for(int i=0;i<m;i++)
	{
		int u,v,r,l;
		cin>>u>>v>>r>>l;
		s.insert({{u,v},{r,l}});
		s.insert({{r,l},{u,v}});
	}
	for(int i=0;i<k;i++)
	{
		int u,v;
		cin>>u>>v;
		List.push_back({u,v});
	}
	int cnt=0;
	for(auto x:List)
	{
		memset(chuaxet,0,sizeof(chuaxet));
		dfs(x);
		for(auto y : List)
		{
			if(chuaxet[y.fi][y.se]==1)
			{
				cnt++;
				cout<<y.fi<<" "<<y.se<<" ";
			}
		}
		cout<<endl;
	}
	cout<<cnt/2;
}
