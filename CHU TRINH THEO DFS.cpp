#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>List[1005];
int chuaxet[1005];
string ans;
int flag;
void dfs(int u,string s,int k)
{
	chuaxet[u]=1;
	if(flag==1)
	{
		return;
	}
	for(auto x:List[u])
	{
		if(chuaxet[x]==0)
		{
			dfs(x,s+" "+to_string(x),u);
		}
		else if(x==1&&k!=1){
			ans=s+" "+to_string(1);
			flag=1;
			break;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		memset(chuaxet,0,sizeof(chuaxet));
		ans="NO";
		flag=0;
		for(int i=1;i<=n;i++)
		{
			List[i].clear();
		}
		for(int i=1;i<=m;i++)
		{
			int u,v;
			cin>>u>>v;
			List[u].push_back(v);
			List[v].push_back(u);
		}
		for(int i=1;i<=n;i++)
		{
			sort(List[i].begin(),List[i].end());
		}
		dfs(1,"1",1);
		cout<<ans<<endl;
	}
}
