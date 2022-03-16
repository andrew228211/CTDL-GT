#include<bits/stdc++.h>
using namespace std;
int c,n;
int a[100];
int k[101][25001];
int main()
{
	cin>>c>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=0;i<=c;i++)
	{
		k[0][i]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(j<a[i])
			{
				k[i][j]=k[i-1][j];
			}
			else{
				k[i][j]=max(k[i-1][j],a[i]+k[i-1][j-a[i]]);
			}
		}
	}
	cout<<k[n][c];
}
