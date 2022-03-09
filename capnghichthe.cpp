//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//int n;
//ll a[1000001],bit[1000001];
//ll res;
//ll get(ll x)
//{
//	ll ans=0;
////	for(;x<N;x+=x&-x) ans+=a[x];
//	while(x<1000001)
//	{
//		ans+=bit[x];
//		x+=x&-x;
//	}
//	return ans;
//}
//void update(ll x)
//{
//	while(x>0)
//	{
//		bit[x]++;
//		x-=x&-x;
//	}
//}
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		cin>>n;
//		res=0;
//		memset(bit,0,sizeof(bit));
//		for(int i=1;i<=n;i++)
//		{
//			cin>>a[i];
//		}
//		for(int i=1;i<=n;i++)
//		{
//			res+=get(a[i]+1);
//			update(a[i]);
//		}
//		cout<<res<<endl;
//	}
//}
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
//	MergeSort(a,l,m);	
//	MergeSort(a,m+1,r);
//	Merge(a,l,m,r);
	}
	return dem;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[100000];
		for(int i=0;i<n;i++) cin>>a[i];
		ll ans=MergeSort(a,0,n-1);
//	MergeSort(a,0,n-1);
//	for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<ans<<endl;
	}
}
