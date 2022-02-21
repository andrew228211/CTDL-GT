#include<bits/stdc++.h>
using namespace std;
int a[100],b[100];
int n,k;
int m,cnt;
/*
2
5 3
2 3 5 -> 2 3 4
1 3 4 i=2

5 3
1 2 3 -> 3 4 5*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=1;i<=k;i++) cin>>a[i];
		int i=k;
		while(a[i]==a[i-1]+1) i--;
		if(i<=0) {
			for(int i=1;i<=k;i++)
			{
				cout<<n-k+i<<" ";
			}
			cout<<endl;
		}
		else{
			a[i]--;
			for(int j=i+1;j<=n;j++)
			{
				a[j]=n-k+j;
			}
			for(int i=1;i<=k;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
	}
}
