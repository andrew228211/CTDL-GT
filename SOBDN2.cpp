#include<bits/stdc++.h>
using namespace std;
long long doi(string s)
{
	long long x=0;
	for(int i=0;i<s.size();i++)
	{
		x=x*10+s[i]-'0';
	}
	return x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		queue<long long>x;
		x.push(1);
		long long tmp;
		long long cnt=0;
		while(!x.empty())
		{
				tmp=x.front();
			if(tmp%n==0)
			{
				cout<<tmp;
				break;
			}
			x.pop();
			x.push(tmp*10+0);
			x.push(tmp*10+1);
		}
		cout<<endl;
	}
}
