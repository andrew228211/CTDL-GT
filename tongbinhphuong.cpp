#include<bits/stdc++.h>
using namespace std;
/*
100=10^2
6=2^2+1^2+1^2;
*/
int f[10005];
void solve()
{
		for(int i=1;i<=10000;i++)
		{
			f[i]=i;
			for(int j=1;j*j<=i;j++)
			{
				f[i]=min(f[i],f[i-j*j]+1);
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
		int n;
		cin>>n;
		cout<<f[n]<<endl;
	}
}
