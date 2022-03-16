#include<bits/stdc++.h>
using  namespace std;
int mod=1e9+7;
/*
Note qhd:
dp[i][j]=iPj
n... n-k+1
7P3 = dp[7][3]
i=7,j=3;
ex  7P3
=7 6 5
= 6*5*4+6*5*3
=d[6][3]+d[6][2]*3
=d[i-1][j]+d[i-1][j-1]*j
=6*5*4+6*5*3
6P3+6P2*3
=> cong thuc chung d[i-1][j]+d[i-1][j-1]*j
*/
long long d[1001][1001];
void sang(){
	for(int i=0;i<1001;i++) d[i][0]=1;
	for(int i=1;i<1001;i++)
	{
		for(int j=1;j<1001;j++)
		{
			d[i][j]=(d[i-1][j]+d[i-1][j-1]*j)%mod;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	sang();
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<d[n][k]<<endl;
	}
}
