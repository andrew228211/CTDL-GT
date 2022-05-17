#include<bits/stdc++.h>
using namespace std;
queue<string>a;
set<string>st;
void xoadaungoac(string s)
{
	vector<pair<int,int>>dq;
	stack<int>q;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(')
		{
			q.push(i);
		}
		else if(s[i]==')'){
			if(!q.empty())
			{
				dq.push_back({q.top(),i});
				q.pop();				
			}
		}
	}
	for(auto x:dq)
	{
		string tmp=s;
		tmp.erase(x.first,1);
		tmp.erase(x.second-1,1);
		if(st.count(tmp)==0)
		{
			st.insert(tmp);
			a.push(tmp);
		}
	}
}
int main()
{
	string s;
	cin>>s;
	a.push(s);
	while(!a.empty())
	{
		xoadaungoac(a.front());
		a.pop();
	}
	for(auto x:st)
	{
		cout<<x<<endl;
	}
}
