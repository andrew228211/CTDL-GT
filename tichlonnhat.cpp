#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	b[0]=a[0]*a[1];
	b[1]=a[0]*a[1]*a[2];
	b[2]=a[n-1]*a[n-2];
	b[3]=a[n-1]*a[0];
	b[4]=a[n-1]*a[n-2]*a[0];
	sort(b,b+5);
	cout<<b[4];
	
}
