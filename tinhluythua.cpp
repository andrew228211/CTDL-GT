#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
ll Pow(int n,ll k)
{
	if(k==0) return 1;
	if(k==1) return n%mod;
	ll x=Pow(n,k/2);
	x=x*x%mod;
	if(k%2==0) return x%mod;
	else return x*n%mod;
}
int main()
{
	ll a,b;
	while(cin>>a&&cin>>b)
	{
		if(a==0&&b==0)
		{
			break;
		}
		cout<<Pow(a,b)<<endl;
	}
}
