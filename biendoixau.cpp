#include<bits/stdc++.h>
using namespace std;
/*
Note trung dp[i][j]=dp[i-1][j-1]
khac thi + 1
*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		str1=" "+str1;
		str2=" "+str2;
		int dp[105][105];
		memset(dp,0,sizeof(dp));
		for(int i=0;i<str1.size();i++)
		{
			dp[i][0]=i;
		}
		for(int i=0;i<str2.size();i++)
		{
			dp[0][i]=i;
		}
		for(int i=1;i<str1.size();i++)
		{
			for(int j=1;j<str2.size();j++)
			{
				if(str1[i]==str2[j])
				{
					dp[i][j]=dp[i-1][j-1];
				}
				else{
					dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
				// dp[i][j-1] xoa ki tu cua day 2
				//dp[i-1][j-1] thay the ki tu
				}
			}
		}
		cout<<dp[str1.size()-1][str2.size()-1]<<endl;
	}
}
