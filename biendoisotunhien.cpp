#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		queue<pair<int,int> >dq;
		dq.push({n,0});
		set<int>check;
		check.insert(n);
		while(!dq.empty())
		{
			pair<int,int>x;
			x=dq.front();
			dq.pop();
			if(x.first==1)
			{
				cout<<x.second<<endl;
				break;
			}
			if(check.count(x.first-1)==0)
			{
				dq.push({x.first-1,x.second+1});
				check.insert(x.first-1);
			}
			for(int i=2;i*i<=x.first;i++)
			{
				if(x.first%i==0&&check.count(x.first/i)==0)
				{
					dq.push({x.first/i,x.second+1});
					check.insert(x.first/i);
				}
			}
		}
	}
}
