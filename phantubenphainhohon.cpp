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
		int a[n+5],b[n+5];
		int c[n+5];
		stack<int>st,dq;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=-1;
			c[i]=-1;
		}
		for(int i=0;i<n;i++)
		{
			while(!st.empty()&&a[st.top()]<a[i])
			{
				b[st.top()]=i;
				st.pop();
			}
			st.push(i);
		}
		for(int i=0;i<n;i++)
		{
			while(!dq.empty()&&a[dq.top()]>a[i])
			{
				c[dq.top()]=a[i];
				dq.pop();
			}
			dq.push(i);
		}
		for(int i=0;i<n;i++)
		{
			if(b[i]==-1)
			{
				cout<<-1<<" ";
			}
			else cout<<c[b[i]]<<" ";
		//cout<<c[b[i]]<<" ";
		}
		cout<<endl;
	}
}
