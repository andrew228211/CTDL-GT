#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Sapxep{
	int start;
	int end;
};
bool Kt(Sapxep&a,Sapxep&b)
{
	return a.end<b.end;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll x;
		Sapxep Ds[1005];
		for(int i=0;i<n;i++)
		{
			cin>>x;
			Ds[i].start=x;
		}
		for(int i=0;i<n;i++){
			cin>>x;
			Ds[i].end=x;
		}
		int cnt=1;
		int dem=0;
		sort(Ds,Ds+n,Kt);
		for(int i=1;i<n;i++)
		{
			if(Ds[i].start>Ds[dem].end)
			{
				cnt++;
				dem=i;
			}
		}
		cout<<cnt<<endl;
	}
}
