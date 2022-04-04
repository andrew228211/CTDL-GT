#include<bits/stdc++.h>
using namespace std;
int List[1005][1005];
int chuaxet[1005];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		memset(chuaxet,0,sizeof(chuaxet));
		int flag=0;
		for(int i=0;i<n-1;i++)
		{
			int u,v;
			cin>>u>>v;
			if(chuaxet[v]==1)
			{
				flag=1;
			}
			List[u][v]=1;
			chuaxet[v]=1;
		}
		if(flag==1)
		{
			cout<<"NO";
		}
		else cout<<"YES";
		cout<<endl;
	}
}

