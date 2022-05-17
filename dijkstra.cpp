#include<bits/stdc++.h>
using namespace std;
#define pa pair<int,int>
int n,m,k;
vector<pa>c[1005];
void dijkstra(int k){
	vector<int>d(n+10000,1e9);
	d[k]=0;
	priority_queue<pa,vector<pa>,greater<pa>>q;
	q.push({0,k});
	while(!q.empty())
	{
		pa tmp=q.top();
		q.pop();
		for(auto x:c[tmp.second])
		{
			if(d[x.first]>x.second+d[tmp.second])
			{
				d[x.first]=x.second+d[tmp.second];
				q.push({d[x.first],x.first});
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
	    for(int i=0;i<=1005;i++)
	    {
	        c[i].clear();
	    }
		for(int i=0;i<m;i++)
		{
			int u,v,w;
			cin>>u>>v>>w;
			c[u].push_back({v,w});
			c[v].push_back({u,w});
		}
		dijkstra(k);
	}
}
