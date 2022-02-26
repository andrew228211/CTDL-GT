#include<bits/stdc++.h>
using namespace std;
int n,k;
char a[1005];
int m;
int main()
{
		char h;
		cin>>h>>k;
		char z=(h-'A')+'0';
		n=z-'0'+1;
		for(int i=1;i<=n;i++) a[i]='A';
		char u='A';
		while(1)
		{
			for(int i=1;i<=k;i++)
			{
				cout<<a[i];
			}
			cout<<endl;
			m=0;
			for(int i=k;i>=1;i--)
			{
				if(a[i]!=h)
				{
					m=1;
					a[i]++;
					for(int j=i+1;j<=k;j++)
					{
						a[j]=a[i];
					}
					break;
				}
			}
			if(m==0)
			{
				break;
			}
		}
}

