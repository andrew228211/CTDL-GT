#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<vector<int> >List(m+5);
		int u,v;
		for(int i=1;i<=m;i++)
		{
			cin>>u>>v;
			List[u].push_back(v);
		}
		for(int i=1;i<=n;i++)
		{
			cout<<i<<": ";
			for(int j=0;j<List[i].size();j++)
			{
				cout<<List[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
