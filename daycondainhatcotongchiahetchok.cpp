#include<bits/stdc++.h>
using namespace std;
/*
Note:  10 3
a[i]   2 3 5 7 9 6 12 7 11 15
a[i]%k 2 0 2 1 0 0 0  1 2  0
mang 2 chieu dp[i][j] voi i la so da xet, j la so du khi chia k
*/
int dp[1005][1005];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n+5];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			a[i]=a[i]%k;
		}
		for(int i=0;i<n;i++) dp[0][i]=-1e9;
		dp[0][0]=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<k;j++)
			{
				dp[i][j]=max(dp[i-1][j],dp[i-1][(j-a[i]+k)%k]+1);
			}
		}
		cout<<dp[n][0]<<endl;
	}
}
