#include<bits/stdc++.h>
using namespace std;
int n;
int a[]={1,2,5,10,20,50,100,200,500,1000};

int cnt;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cnt=0;
		int d=0;
		for(int i=9;i>=0;i--)
		{
			if(n<=0) break;
			cnt+=n/a[i];
			d=n/a[i];
			n=n-d*a[i];
		}
		cout<<cnt<<endl;
	}
}
