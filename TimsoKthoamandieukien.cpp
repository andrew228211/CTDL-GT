#include<bits/stdc++.h>
using namespace std;
#define ll long long
int kt(int x)
{
	string s=to_string(x);
	int f[10];
	memset(f,0,sizeof(f));
	for(int i=0;i<s.size();i++)
	{
    	f[s[i]-'0']++;
    	if(f[s[i]-'0']>1) return 1;
		if(s[i]>'5')
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int L,R;
		cin>>L>>R;
		queue<pair<int,int> >dq;
		dq.push({L,0});
		set<int>check;
		while(!dq.empty())
		{
			pair<int,int>x;
			x=dq.front();
			dq.pop();
			if(x.first==R)
			{
				if(kt(x.first)==0)
				{
					cout<<x.second+1<<endl;
				}
				else cout<<x.second<<endl;
				break;
			}
			if(kt(x.first)==0)
			{
				dq.push({x.first+1,x.second+1});
			}
			else{
					dq.push({x.first+1,x.second});
			}
			
		}
	}
}
