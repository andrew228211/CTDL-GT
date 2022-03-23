#include<bits/stdc++.h>
using namespace std;
int doi(string s)
{
	int x=0;
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
		int n;
		cin>>n;
		queue<string>x;
		x.push("9");
		string tmp;
		while(!x.empty())
		{
			if(doi(x.front())%n==0)
			{
				cout<<x.front()<<endl;
				break;
			}
			tmp=x.front();
			x.pop();
			x.push(tmp+"0");
			x.push(tmp+"9");
		}
	}
}
