#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,v;
		cin>>n>>v;
		int weight[100],value[100];
		int c[n+5][v+5];
		for(int i=1;i<=n;i++)
		{
			cin>>weight[i];
		}
		for(int i=1;i<=n;i++)
		{
			cin>>value[i];
		}
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=v;j++)
			{
				if(i==0||j==0)
				{
					c[i][j]=0;
				}
				else if(j>=weight[i])
				{
					c[i][j]=max(c[i-1][j],value[i]+c[i-1][j-weight[i]]);
				}
				else{
					c[i][j]=c[i-1][j];
				}
			}
		}
		cout<<c[n][v]<<endl;
	}
}
