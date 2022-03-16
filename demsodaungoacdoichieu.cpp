#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s;
	cin.ignore();
	while(t--)
	{
		getline(cin,s);
		stack<char>dq;
		char top;
		dq.push(s[0]);
		for(int i=1;i<s.size();i++)
		{
			if(dq.empty())
			{
				dq.push(s[i]);
				i++;
			}
			top=dq.top();
			dq.push(s[i]);
			if(top=='('&&dq.top()==')')
			{
				dq.pop();
				dq.pop();
			}
		}
		int cnt=0;
		while(!dq.empty())
		{
			top=dq.top();
			dq.pop();
			if(dq.top()==top)
			{
				cnt++;
				dq.pop();
			}
			else{
				cnt+=2;
				dq.pop();
			}
		}
		cout<<cnt;
		cout<<endl;
	}
}
