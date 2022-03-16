#include<bits/stdc++.h>
using namespace std;
/*
231*+9–
2+3*1-9=-4
875*+9-
8+7*5-9=34
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
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='0'&&s[i]<='9')
			{
				st=s[i]-'0';
				dq.push(st);
			}
			else{
				int s2=dq.top();dq.pop();
				int s1=dq.top(); dq.pop();
				int x=uutien(s1,s[i],s2);
				dq.push(x);
			}
		}
		cout<<dq.top()<<endl;
	}
}
