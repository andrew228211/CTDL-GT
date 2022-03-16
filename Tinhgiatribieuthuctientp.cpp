#include<bits/stdc++.h>
using namespace std;
/*
-+8/632

-+7*45+20
4*5+7-20=7
*/
int uutien(int a,char c,int b)
{
	if(c=='+') return a+b;
	if(c=='-') return a-b;
	if(c=='*') return a*b;
	if(c=='/') return a/b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		stack<int>dq;
		int st;
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]>='0'&&s[i]<='9')
			{
				st=s[i]-'0';
				dq.push(st);
			}
			else{
				int s1=dq.top();dq.pop();
				int s2=dq.top(); dq.pop();
				int x=uutien(s1,s[i],s2);
				dq.push(x);
			}
		}
		cout<<dq.top()<<endl;
	}
}
