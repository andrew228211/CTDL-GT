#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int f['z'+1]={0};
		for(int i=0;i<s.size();i++)
		{
			f[s[i]]++;
		}
		int d=0;
		int n;
		if(s.size()%2==0)
		{
			n=s.size()/2;
		}
		else n=s.size()/2+1;
		for(char i = 'a';i<='z';i++)
		{
			if(f[i]>n)
			{
				d=1;
				break;
			}
		}
		if(d==1) cout<<-1;
		else cout<<1;
		cout<<endl;
	}
}
