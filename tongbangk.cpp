#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
/*
Note:
3 7
1 5 6
dp[6]= {1 1 1 1 1 1, 1 5, 5 1, 6} =4
dp[2] = {1 1} = 1
dp[1]={1} = 1
dp[7]={1 1 1 1 1 1 1, 1 1 5,5 1 1, 1 5 1, 6 1, 1 6]=6
dp[7]=dp[1]+dp[2]+dp[6];
*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n+5];
		long long dp[1005];
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		dp[0]=1;
		for(int i=1;i<=k;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[j]<=i)
				{
					dp[i]=(dp[i]+dp[i-a[j]])%mod;
				}
			}
		}
		cout<<dp[k]%mod<<endl;
	}
}
