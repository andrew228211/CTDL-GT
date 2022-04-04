#include<bits/stdc++.h>
using namespace std;
int List[1005];
int n,m;
int chuaxet[1005];
int kt()
{
	for(int i=1;i<=n;i++)
	{
		if(List[i]==0||chuaxet[i]==0)
		{
			return 0;
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
		memset(List,0,sizeof(List));
		memset(chuaxet,0,sizeof(chuaxet));
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			int u,v;
			cin>>u>>v;
			List[u]=1;
			chuaxet[v]=1;
		}
		if(kt()==1)
		{
			cout<<"YES";
		}
		else cout<<"NO";
		cout<<endl;
	}
}
