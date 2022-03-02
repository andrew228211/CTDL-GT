#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f[93];
void Try(ll n,ll k)
{
	if(n==1)
	{
		cout<<'A'<<endl;
		return;
	}
	if(n==2)
	{
		cout<<'B'<<endl;
		return;
	}
	if(k>f[n-2])
	{
		Try(n-1,k-f[n-2]);
	}
	else {
		Try(n-2,k);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		f[1]=1;f[2]=1;
		for(int i=3;i<=n;i++)
		{
			f[i]=f[i-1]+f[i-2];
		}
		Try(n,k);
}
}
