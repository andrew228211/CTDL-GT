#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long k;
		string s;
		cin>>k>>s;
		long long f['Z'+1]={0};
		for(int i=0;i<s.size();i++)
		{
			f[s[i]]++;
		}
		priority_queue<long long>dq;
		for(char i='A';i<='Z';i++)
		{
			if(f[i]>0)
			{
				dq.push(f[i]);
			}
		}
		while(k--)
		{
			long long x=dq.top();
			dq.pop();
			x=x-1;
			dq.push(x);
		}
		long long x=0;
		while(!dq.empty())
		{
			x+=dq.top()*dq.top();
			dq.pop();
		}
		cout<<x<<endl;
	}
}
