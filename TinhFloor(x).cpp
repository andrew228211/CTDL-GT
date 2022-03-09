#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<ll>a(n+5);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}	
		int x=upper_bound(a.begin(),a.end(),k)-a.begin();
		if(x==0)
		{
			cout<<-1<<endl;
			continue;
		}
		cout<<x<<endl;
	}
}
