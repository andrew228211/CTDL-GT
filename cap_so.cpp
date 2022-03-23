#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Merge(ll a[], ll l, ll m, ll r)
{
	vector<ll>x;
	vector<ll>y;
	for(int i=l;i<=m;i++) x.push_back(a[i]);
	for(int i=m+1;i<=r;i++) y.push_back(a[i]);
	int i=0,j=0;
	ll cnt=0;
	while(i<x.size()&&j<y.size())
	{
		if(x[i]<=y[j])
		{
			a[l]=x[i];l++;i++;
		}
		else{
			a[l]=y[j]; l++;j++;
			cnt+=x.size()-i;
		}
	}
	while(i<x.size()){
		a[l]=x[i];
		l++;i++;
	}
	while(j<y.size()){
		a[l]=y[j];l++;j++;
	}
	return cnt;
}
ll MergeSort(ll a[],ll l,ll r)
{
	ll dem=0;
	if(l<r)
	{
	ll m=(l+r)/2;
	dem+=MergeSort(a,l,m);
	dem+=MergeSort(a,m+1,r);
	dem+=Merge(a,l,m,r);
	}
	return dem;
}
int main()
{
		ll n;
		cin>>n;
		ll a[100000],b[10000];
		int h=0;
		for(int i=0;i<n;i++) {
		cin>>a[i];
		if(a[i]%2==0)
		{
			b[h++]=a[i];
		}
		}
		ll ans=MergeSort(b,0,h-1);
		int cnt=0;
		a[n]=1;
		for(int i=1;i<=n;i++)
		{
			if(a[i]%2==0&&a[i-1]%2==0)
			{
				cnt++;
			}
			else if(a[i]%2==1&&a[i-1]%2==0){
				ans-=MergeSort(b,i-1-cnt,i-1);
				cnt=0;
			}
		}
	cout<<ans;
}
