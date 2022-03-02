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
		int a[n+5];
		int f[2]={0};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			f[a[i]]++;
		}
		cout<<f[0]<<endl;
	}
}
