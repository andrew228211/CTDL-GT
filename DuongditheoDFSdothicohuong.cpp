#include<bits/stdc++.h>
using namespace std;
int List[1005][1005];
int chuaxet[1005];
int n,m,k,T;
string ans;
void dfs(int u,string s)
{
	chuaxet[u]=1;
	for(int i=1;i<=n;i++)
	{
		if(chuaxet[i]==0&&List[u][i]==1)
		{
			if(i==T)
			{
				ans=s+" "+to_string(i);
			}
			dfs(i,s+" "+to_string(i));
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
		dfs(k,to_string(k));
		if(chuaxet[T]==0)
		{
			cout<<-1;
		}
		else cout<<ans;
		cout<<endl;
		
	}
}

