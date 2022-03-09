#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,l,r;
ll Size(ll n)
{
	if(n==1||n==0) return 1;
	ll tmp=Size(n/2);
	return 2*tmp+1;
}
ll Dem(ll n,ll x,ll y)
{
	if(x>r||y<l) return 0;
	if(x>=l&&y<=r) return n;
	ll mid=(x+y)/2;
	if(mid>=l&&mid<=r)
	{
		return Dem(n/2,x,mid-1)+Dem(n/2,mid+1,y)+n%2;
	}
	else {
	return Dem(n/2,x,mid-1)+Dem(n/2,mid+1,y);
}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>l>>r;
		//cout<<Size(n)<<endl;
		//int cnt=0;
		cout<<Dem(n,1,Size(n))<<endl;
	}
}
