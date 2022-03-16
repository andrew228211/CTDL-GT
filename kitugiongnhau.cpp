#include<bits/stdc++.h>
using namespace std;
/*
he thuc truy hoi:
TH1 neu la so chan:
th1 co n-1 cach chen ki tu
th2 co n/2 cach chen ki tu
th2 neu la le
th1 co n-1 ah
th2 co n/2+1 cach
le thi nhan doi - tru 1
vi du 10: 5*2 i/2
9 5*2-1
=>le i+1/2-1
*/
int dp[105];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int x,y,z;
		cin>>x>>y>>z;
		memset(dp,0,sizeof(dp));
		dp[1]=x;
		for(int i=2;i<=n;i++)
		{
			if(i%2==0)
			{
				dp[i]=min(dp[i-1]+x,dp[i/2]+z);
			}
			else{
				dp[i]=min(dp[i-1]+x,dp[(i+1)/2]+y+z);
			}
		}
		cout<<dp[n]<<endl;
	}
}
