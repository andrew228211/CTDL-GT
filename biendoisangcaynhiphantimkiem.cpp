#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int par,chi;
		char c;
		set<int>x;
		for(int i=0;i<n;i++)
		{
			cin>>par>>chi>>c;
			x.insert(par);
			x.insert(chi);		
		}
		for(auto s:x)
		{
			cout<<s<<" ";
		}
		cout<<endl;
	}
}
