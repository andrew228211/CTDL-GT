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
		for(int i=0;i<s.size();i++)
		{
			if(s[i]!=')') st.push(s[i]);
			else
			{
				string tmp;
				while(!st.empty()&&st.top()!='(')
				{
					tmp=st.top()+tmp;
					st.pop();
				}
				st.pop();
				char c;
				if(!st.empty())
				{
					c=st.top();
				}
				for(int j=0;j<tmp.size();j++)
				{
					if(c=='-')
					{
						if(tmp[j]=='+')
						{
							st.push('-');
						}
						else if(tmp[j]=='-')
						{
							st.push('+');
						}
						else{
							st.push(tmp[j]);
						}
					}
					else{
					    st.push(tmp[j]);
					}
				}
				tmp.clear();
			}
		}
		string ans;
		while(!st.empty())
		{
			ans=st.top()+ans;
			st.pop();
		}
		cout<<ans<<endl;
	}
}
