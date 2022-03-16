#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		stack<int>dq;
		int Max=0;
		dq.push(-1);
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='(')
			{
				dq.push(i);
			}
			else{
				dq.pop();
				if(dq.empty())
				{
					dq.push(i);
				}
				else{
					Max=max(Max,i-dq.top());
				}
			}
		}
		cout<<Max<<endl;
	}
}

