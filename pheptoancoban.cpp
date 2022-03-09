#include<bits/stdc++.h>
using namespace std;
int n,k;
string s,ans;
int cnt=0,Min=1e9;
int b[100];
void check(string ss)
{
	int s1=int(ss[0]-'0')*10+int(ss[1]-'0');
	int s2=int(ss[5]-'0')*10+int(ss[6]-'0');
	int s3=int(ss[10]-'0')*10+int(ss[11]-'0');
	if(ss[3]=='+'&&s1+s2==s3)
	{
		ans=min(ans,ss);
	}
	if(ss[3]=='-'&&s1-s2==s3)
	{
		ans=min(ans,ss);
	}
	if(ss[3]=='*'&&s1*s2==s3)
	{
		ans=min(ans,ss);
	}
	if(ss[3]=='/'&&s1/s2==s3&&s1%s2==0)
	{
		ans=min(ans,ss);
	}
}
void Try(int i,string res)
{
	if(i==s.size())
	{
		check(res);
		return;
	}
	if(s[i]=='?')
	{
		if(i==3)
		{
			Try(i+1,res+'+');
			Try(i+1,res+'-');
			Try(i+1,res+'*');
			Try(i+1,res+'/');
		}
		else if(i==0||i==5||i==10)
		{
			for(int j=1;j<=9;j++)
			{
				Try(i+1,res+char(j+'0'));
			}
		}
		else {
			for(int j=0;j<=9;j++)
			{
				Try(i+1,res+char(j+'0'));
			}
		}
	}
	else {
		Try(i+1,res+s[i]);
	}
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		getline(cin,s);
		ans="WRONG PROBLEM!";
		Try(0,"");
		cout<<ans<<endl;
	}
}
