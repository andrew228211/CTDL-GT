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
		stack<char>st;
		st.push('1');
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==')'&&st.top()=='('||s[i]==']'&&st.top()=='['||s[i]=='}'&&st.top()=='{')
			{
				st.pop();
			}
			else st.push(s[i]);
		}
		if(st.top()=='1')
		{
			cout<<"YES";
		}
		else cout<<"NO";
		cout<<endl;
	}
}
