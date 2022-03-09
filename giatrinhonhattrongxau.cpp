#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		string s;
		cin>>k>>s;
		int f['Z'+1]={0};
		for(int i=0;i<s.size();i++)
		{
			f[s[i]]++;
		}
		priority_queue<int>dq;
		for(char i='A';i<='Z';i++)
		{
			if(f[i]>0)
			{
				dq.push(f[i]);
			//	cout<<dq.top()<<" ";
			}
		}
		while(k>0)
		{
			int x=dq.top();
			dq.pop();
			x=x-1;
			dq.push(x);
			k--;
			//cout<<k<<" "<<x<<endl;
		}
		int sum=0;
		while(dq.size()>0)
		{
			int x=dq.top();
			sum+=x*x;
			dq.pop();
		}
		cout<<sum<<endl;
	}
}
