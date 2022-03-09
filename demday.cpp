#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=123456789;
/*
Note 
2: 1 1
3  1 1 1, 1 2, 2 1, 3
4  1 1 1 1, 1 1 2, 1 2 1, 2 1 1,2 2, 3 1, 1 3,
*/
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
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		if(n==1) cout<<1<<endl;
		else cout<<Pow(2,n-1)<<endl;
	}
}
