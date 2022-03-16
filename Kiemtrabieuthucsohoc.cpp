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
		int x=1;
		for(int i=0;i<s.size();i++)
		{
			x=1;
			if(s[i]==')')
			{
				while(dq.top()!='(')
				{
					dq.pop();
					if(dq.top()=='+'||dq.top()=='-'||dq.top()=='*'||dq.top()=='/')
					{
						x=0;
						dq.pop();
					}
				}
				dq.pop();
				if(x==1)
				{
					break;
				}
			}
			dq.push(s[i]);
		}
		if(x==0)
		{
			cout<<"No"<<endl;
		}
		else cout<<"Yes"<<endl;
	}
}
