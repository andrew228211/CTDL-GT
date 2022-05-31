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
set<pa>tmp;
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	cin>>n>>k>>m;
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
		tmp.insert({u,v});
	}
	int cnt=0;
	for(auto x:List)
	{
		if(chuaxet[x.fi][x.se])
		{
			continue;
		}
		dfs(x);
		vector<pa>res;
		for(auto y:tmp)
		{
			if(chuaxet[y.fi][y.se])
			{
				res.push_back(y);
			}
		}
		for(auto y:res)
		{
			tmp.erase(y);
		}
		cnt+=res.size()*tmp.size();
	}
	cout<<cnt;
}
