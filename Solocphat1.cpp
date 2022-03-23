#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long x=0;
		for(int i=1;i<=n;i++)
		{
			x=x*10+8;
		}
		queue<long long >dq;
		stack<long long>st;
		dq.push(6);
		dq.push(8);
		long long z=1;
		while(!dq.empty())
		{
			st.push(dq.front());
			z=dq.front();
			if(z==x)
			{
				break;
			}
			dq.pop();
			dq.push(z*10+6);
			dq.push(z*10+8);
		}
		while(!st.empty())
		{
			cout<<st.top()<<" ";
			st.pop();
		}
		cout<<endl;
	}
}
