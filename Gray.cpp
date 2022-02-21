#include<bits/stdc++.h>
using namespace std;
int n,a[100];
void xuat()
{
	cout<<a[1];
	for(int i=2;i<=n;i++)
	{
		int x=a[i]^a[i-1];//XOR 2 so trai dau ra 1
		cout<<x;
	}
	cout<<" ";
}
//void Try(int i)
//{
//	for(int j=0;j<=1;j++)
//	{
//		a[i]=j;
//		if(i==n) xuat();
//		else Try(i+1);
//	}
//}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		//Try(1);
//		string u;
//		u=s;
//		for(int i=1;i<s.size();i++)
//		{
//			if((u[i-1]-'0')^0==(s[i]-'0')) u[i]='0';
//			else u[i]='1';
//		}
		//cout<<u;
		cout<<s[0];
		for(int i=1;i<s.size();i++)
		{
			int x=s[i]^s[i-1];
			cout<<x;
		}
		cout<<endl;
	}
}
