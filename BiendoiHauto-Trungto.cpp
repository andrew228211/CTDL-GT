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
		stack<string>st;
		string k;
		for(int i=0;i<s.size();i++)
		{
			if(isalpha(s[i]))
			{
				k+=s[i];
				st.push(k);
				k.clear();
			}
			else{
				string s1=st.top();st.pop();
				string s2=st.top();st.pop();
				string x="("+s2+s[i]+s1+")";
				st.push(x);
			}
		}
		cout<<st.top()<<endl;
	}
}
