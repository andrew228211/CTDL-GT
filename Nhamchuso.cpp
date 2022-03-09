#include<bits/stdc++.h>
using namespace std;
int Min(string s)
{
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='6')
		{
			s[i]='5';
		}
	}
	int x=atoi(s.c_str());
	return x;
}
int Max(string s)
{
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='5')
		{
			s[i]='6';
		}
	}
	int x=atoi(s.c_str());
	return x;
}
int main()
{
		string n,k;
		cin>>n>>k;
		cout<<Min(n)+Min(k)<<" "<<Max(n)+Max(k);
}
