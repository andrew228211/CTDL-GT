#include<bits/stdc++.h>
using namespace std;
string s;
set<string>v;
int check;
int kt(string a)
{
	int cnt=0;
	if(a.size()<2) return 0;
	for(int j=0;j<a.size();j++)
		{
			if(a[j]=='(')
			{
			cnt+=1;
			}
			if(a[j]==')')
			{
			cnt-=1;
			}
			if(cnt<0) return 0;
		}	
	if(cnt==0)
	{
		return 1;
	}
	else return 0;
}
void Try(int i,string a)
{
	if(kt(a)==1)
	{
		if(check<a.size())
		{
			check=a.size();
			v.clear();
			v.insert(a);
		}
		else if(a.size()==check)
			v.insert(a);
		return;
	}
	for(int j=i+1;j<a.size();j++)
	{
		if(a[j]=='('||a[j]==')')
		{
			string x = a;
            x.erase(x.begin() + j, x.begin() + j + 1);
            Try(j - 1,x);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		v.clear();
		cin>>s;
		check=0;
		int x=0,y=0;
		for(int j=0;j<s.size();j++)
		{
			if(s[j]=='(')
			{
			x++;
			}
			if(s[j]==')')
			{
			y++;
			}
		}
		Try(-1,s);
		if (v.empty())
            cout << -1;
		else{
		for(auto &x:v)
		{
			cout<<x<<" ";
		}
	}
		cout<<endl;
	}
}
