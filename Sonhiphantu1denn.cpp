#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		queue<string>x;
		x.push("1");
		string tmp;
		for(int i=1;i<=n;i++)
		{
			cout<<x.front()<<" ";
			tmp=x.front();
			x.pop();
			x.push(tmp+"0");
			x.push(tmp+"1");
		}
		cout<<endl;
	}
}
