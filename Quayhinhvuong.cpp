#include<bits/stdc++.h>
using namespace std;
int trai[7]={4,1,3,5,2,6};
int phai[6]={1,5,2,4,6,3};
int kt(string s1,string s2)
{
	for(int i=0;i<6;i++)
	{
		if(s1[i]!=s2[i])
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
		int a[7],b[7];
		string s1,s2;
		for(int i=0;i<6;i++)
		{
			cin>>a[i];
			s1+=to_string(a[i]);
		}
		for(int i=0;i<6;i++)
		{
			cin>>b[i];
			s2+=to_string(b[i]);
		}
		queue<pair<string,int>>dq;
		dq.push({s1,0});
		set<string>st;
		st.insert(s1);
		string x1,x2;
		while(!dq.empty())
		{
			pair<string,int>x=dq.front();
			dq.pop();
			if(kt(x.first,s2)==0)
			{
				cout<<x.second<<endl;
				break;
			}
			string x1,x2;
			x1.clear();
			x2.clear();
			for(int i=0;i<6;i++)
			{
					x1+=x.first[trai[i]-1];
			}
			if(st.count(x1)==0)
			{
				dq.push({x1,x.second+1});
				st.insert(x1);
			}
			for(int i=0;i<6;i++)
				{
					x2+=x.first[phai[i]-1];
				}
			if(st.count(x2)==0)
			{
				dq.push({x2,x.second+1});
				st.insert(x2);
			}
		}
	}
}
