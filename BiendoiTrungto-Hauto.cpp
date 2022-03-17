#include<bits/stdc++.h>
using namespace std;
int uutien(char c)
{
	if(c=='+'||c=='-') return 1;
	if(c=='*'||c=='/'||c=='%') return 2;
	if(c=='^') return 3;
	else return 0;	 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		stack<char>st;
		string s1;
		for(int i=0;i<s.size();i++)
		{
			if(isalpha(s[i])) cout<<s[i];
			else{
				if(s[i]=='(')
				{
					st.push(s[i]);
				}
				else{
					if(s[i]==')')
					{
						while(st.top()!='(')
						{
							cout<<st.top();
							st.pop();
						}
						st.pop();
					}
					else{
						while(!st.empty()&&uutien(s[i])<=uutien(st.top()))
						{
							cout<<st.top();
							st.pop();
						}
						st.push(s[i]);
					}
				}
			}
		}
		while(!st.empty())
		{
			if(st.top()=='(')
			{
				st.pop();
			}
			else{
				cout<<st.top();
				st.pop();
			}
		}
		cout<<endl;
	}
}
