#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	deque<int>dq;
	cin.ignore();
	while(t--)
	{
		string s;
		cin>>s;
		if(s=="PUSHBACK")
		{
			int x;
			cin>>x;
			dq.push_back(x);
		}
		if(s=="PUSHFRONT")
		{
			int x;
			cin>>x;
			dq.push_front(x);
		}
		if(s=="POPFRONT")
		{
			if(!dq.empty())
			{
				dq.pop_front();
			}
		}
		if(s=="POPBACK")
		{
			if(!dq.empty())
			{
				dq.pop_back();
			}
		}
		if(s=="PRINTFRONT")
		{
			if(!dq.empty())
			{
				cout<<dq.front();
			}
			else{
				cout<<"NONE";
			}
			cout<<endl;
		}
		if(s=="PRINTBACK")
		{
			if(!dq.empty())
			{
				cout<<dq.back();
			}
			else{
				cout<<"NONE";
			}
			cout<<endl;
		}
	}
}
