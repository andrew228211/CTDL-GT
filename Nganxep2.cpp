#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	stack<int>dq;
	while(n--)
	{
		cin>>s;
		if(s=="PUSH")
		{
			int x;
			cin>>x;
			dq.push(x);
		}
		else if(s=="POP")
		{
		    if(dq.empty())
			{
				continue;
			}
			dq.pop();
		}
		else{
			if(dq.empty())
			{
				cout<<"NONE"<<endl;
				continue;
			}
			cout<<dq.top()<<endl;
		}
	}
}
