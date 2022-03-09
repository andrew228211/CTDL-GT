#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n+5];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		ll cnt=n;
		ll mid=upper_bound(a,a+n,a[0]*2)-a;
	//	ll mid=n/2;
		for(int i=0;i<n/2;i++)
		{
			while(mid<n)
			{
				if(a[i]*2<=a[mid])
				{
					cnt--;
					mid++;
					break;
				}
				else mid++;
			}	
		}
		cout<<cnt<<endl;
	}
}
