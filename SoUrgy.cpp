#include<bits/stdc++.h>
using namespace std;
/*
Note n=2^x*3^y*5^z;
*/
long long dp[1001];
int n;
void Tinh()
{
	long long x=2,y=3,z=5;
	int i1=0,i2=0,i3=0;// vi tri 
	dp[1]=1;
	for(int i=1;i<1001;i++)
	{
		dp[i]=min(x,min(y,z));
		if(dp[i]==x){
			i1++,
			x=dp[i1]*2;
		}
		if(dp[i]==y)
		{
			i2++,
			y=dp[i2]*3;
		}
		if(dp[i]==z)
		{
			i3++,
			z=dp[i3]*5;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	Tinh();
	while(t--)
	{
		cin>>n;
		cout<<dp[n-1]<<endl;
	}
}
