#include<bits/stdc++.h>
using namespace std;
/*
Note: dp[i][j] voi i la so chu so, j tong cac chu xo
so co i chu so tao ra bang cach them 1 chu so s vao so co i-1 chu so
ex 2 5 : dp[2][5] = {14, 50, 23, 32, 41} 
tong moi - tong cu = s=> j= j+s
=> tong moi  la dp[i][j]+=dp[i-1][j-s];
*/
int mod=1e9+7;
int dp[105][50001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=9;i++) dp[1][i]=1;
		for(int i=1;i<=n;i++)
		{
			for(int s=0;s<=9;s++)
			{
				for(int j=s;j<=k;j++)
				{
					dp[i][j]=(dp[i][j]+dp[i-1][j-s])%mod;
				}
			}
		}
		cout<<dp[n][k]<<endl;
	}
}
