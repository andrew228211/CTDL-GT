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
		long long a[n+5],b[n+5];
		stack<int>st;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=1;
			while(!st.empty()&&a[st.top()]<=a[i])
			{
				b[i]+=b[st.top()];
				st.pop();
			}
			st.push(i);
		}
		for(int i=0;i<n;i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
