#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k; string a,b;
		cin>>k>>a>>b;
		string ans="";
		while(a.size()<b.size()) a="0"+a;
		while(b.size()<a.size()) b="0"+b;
		int du=0,tmp=0;
		for(int i=a.size()-1;i>=0;i--)
		{
			int tmp=a[i]-'0'+b[i]-'0'+du;
			du=tmp/k;
			tmp=tmp%k;
			ans=char(tmp+'0')+ans;
		}
		if(du)
		{
			ans="1"+ans;
		}
		cout<<ans<<endl;
	}
}
