#include<bits/stdc++.h>
using namespace std;
long long dp[105][105];
void solve()
{
	for(int i=0;i<=25;i++) dp[i][0]=1;
		for(int i=0;i<=25;i++) dp[0][i]=1;
		for(int i=1;i<=25;i++)
		{
			for(int j=1;j<=25;j++)
			{
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
}
int main()
{
	int t;
	cin>>t;
	solve();
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		cout<<dp[n][m]<<endl;
	}
}
