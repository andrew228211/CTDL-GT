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
		for(int i=1;i<=n;i++)
		{
			tmp=x.front();
			if(x.front()>n)
			{
				break;
			}
			else{
				cnt++;
			}
			x.pop();
			x.push(tmp*10+0);
			x.push(tmp*10+1);
		}
		cout<<cnt<<endl;
	}
}
