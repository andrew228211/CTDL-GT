#include<bits/stdc++.h>
using namespace std;
int n,s,m;
void Mua()
{
	int cnt=0;
	int x=s*m;
	for(int i=1;i<=s;i++)
	{
		if(i%7==0) continue;
		else{
			cnt++;
			if(cnt*n>=x)
			{
				cout<<cnt<<endl;
				return;
			}
		}
	}
	cout<<-1<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>s>>m;
		Mua();
	}
}
