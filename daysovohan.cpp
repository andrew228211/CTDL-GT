#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1e9+7;
void Nhan(ll f[2][2],ll M[2][2])
{
	ll x=((f[0][0]*M[0][0])%mod+(f[0][1]*M[1][0])%mod)%mod;
	ll y=((f[0][0]*M[0][1])%mod+(f[0][1]*M[1][1])%mod)%mod;
	ll z=((f[1][0]*M[0][0])%mod+(f[1][1]*M[1][0])%mod)%mod;
	ll t=((f[1][0]*M[0][1])%mod+(f[1][1]*M[1][1])%mod)%mod;
	f[0][0]=x;
	f[0][1]=y;
	f[1][0]=z;
	f[1][1]=t;
}
void Pow(ll f[2][2],int n)
{
	if(n==0||n==1)
		return;
	ll M[2][2]={{1,1},{1,0}};
	Pow(f,n/2);
	Nhan(f,f);
	if(n%2!=0)
	{
		Nhan(f,M);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll f[2][2]={{1,1},{1,0}};
		if(n==0)
		{
			cout<<0<<endl;
			continue;
		}
		Pow(f,n-1);
		cout<<f[0][0]<<endl;
	}
}
