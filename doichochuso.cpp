#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int a[11];
bool kt(int a,int b)
{
	return a>b;
}
int check(int v)
{
	for(int i=v;i<s.size();i++)
	{
		if(a[i]!=(s[i]-'0'))
		{
			return i;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		int i;
		for(i=0;i<s.size();i++)
		{
			a[i]=s[i]-'0';
		}
		sort(a,a+i,kt);
		int v=0;
		while(n--)
		{
			v=check(v);
			for(i=s.size()-1;i>=v;i--)
			{
				if(s[i]-'0'==a[v])
				{
					swap(s[v],s[i]);
					break;
				}
			}
			v++;
		}
		cout<<s<<endl;
	}
}

