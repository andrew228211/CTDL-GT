#include<bits/stdc++.h>
using namespace std;
/*
Note:
1
5
4 5 1 2 25
1 4 3 4 -1
*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+5],b[n+5];
		stack<int>st;
		for(int i=0;i<n;i++) {
		b[i]=-1;
		}
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=-1;
			while(!st.empty()&&a[st.top()]<a[i])
			{
				b[st.top()]=a[i];
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
