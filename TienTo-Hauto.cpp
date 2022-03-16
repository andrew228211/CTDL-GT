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
		stack<string>dq;
		string st;
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]>='A'&&s[i]<='Z')
			{
				st+=s[i];
				dq.push(st);
				st.clear();
			}
			else{
				string s1=dq.top();dq.pop();
				string s2=dq.top(); dq.pop();
				string tmp=s1 + s2 +s[i];
				dq.push(tmp);
			}
		}
		cout<<dq.top()<<endl;
	}
}
