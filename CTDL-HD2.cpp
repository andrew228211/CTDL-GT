#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	queue<int>dq;
	cin.ignore();
	while(t--)
	{
		string s;
		cin>>s;
		if(s=="PUSH")
		{
			int x;
			cin>>x;
			dq.push(x);
		}
		if(s=="POP")
		{
			if(!dq.empty())
			{
				dq.pop();
			}
		}
		if(s=="PRINTFRONT")
		{
			if(!dq.empty())
			{
				cout<<dq.front()<<endl;
			}
			else{
				cout<<"NONE"<<endl;
			}
		}
	}
}
