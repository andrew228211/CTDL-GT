#include<bits/stdc++.h>
using namespace std;
/*
dp[i][j] ki tu i den ki tu j cua chuoi 
Note tim do dai lon nhat doi xung trong s
=> so ki tu can chen la n-..
*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int dp[100][100];
		memset(dp,0,sizeof(dp));
		for(int i=0;i<s.size();i++)
		{
			dp[i][i]=1;
		}
		for(int l=2;l<=s.size();l++)
		{
			for(int i=0;i<=s.size()-l+1;i++ )
			{
				int j=l+i-1;
				if(s[i]==s[j]){
					dp[i][j]=dp[i+1][j-1]+2;
				}
				else{
					dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
				}
			}
		}
		cout<<s.size()-dp[0][s.size()-1]<<endl;
	}
}
