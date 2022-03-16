#include<bits/stdc++.h>
using namespace std;
/*
Dau hieu ex 1234
1234 + 234 +34 +4 = 1490 + 16
123 + 23 + 3= 140 + 3*3
12 + 2 = 10 + 2*2
1
421
421 + 21 +1  = 440 + 3*1
42 2 = 40 + 2*2
4 
=> 10*dp[i-1]+(i+1) * s[i]
*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.size();
		long long dp[101];
		dp[0]=s[0]-'0';
		long long ans=dp[0];
		for(int i=1;i<n;i++)
		{
			dp[i]=10*dp[i-1]+(s[i]-'0')*(i+1);
			ans+=dp[i];
		}
		cout<<ans<<endl;
	}
}
