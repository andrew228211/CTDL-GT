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
		int f[1000]={0};
		/*
		1123
		1 1 2 3
		11 2 3
		11 23
		1 12 3
		1 1 23
		*/
		if(s[0]=='0')
		{
			cout<<0<<endl;
			continue;
		}
		s=" "+s;
		f[0]=1;f[1]=1;
		for(int i=2;i<=s.size()-1;i++)
		{
			if(s[i]>'0') f[i]=f[i-1];
			if(s[i-1]=='1'||s[i-1]=='2'&&s[i]<'7')
			{
				f[i]+=f[i-2];
			}
		}
		cout<<f[s.size()-1]<<endl;
	}
}
