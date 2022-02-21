#include<bits/stdc++.h>
using namespace std;
int a[100],b[100];
int n,k,s;
int m,cnt;
void sinh()
{
	int i=k;
	while(i>0&&a[i]==n-k+i) i--;
	a[i]++;
	if(i>0){
		for(int j=i+1;j<=n;j++)
		{
			a[j]=a[i]+j-i;
		}
	}
	else m=1;
}
void kt()
{
	int sum=0;
	for(int i=1;i<=k;i++)
	{
		sum+=a[i];
	}
	if(sum==s) cnt++;
}
int main()
{
	while(cin>>n&&cin>>k&&cin>>s)
	{
		if(n==0&&k==0&&s==0)
		{
			break;
		}
		else if(n<k) cout<<"0"<<endl;
		else{
			for(int i=1;i<=n;i++) a[i]=i;
		m=0,cnt=0;
		while(m!=1)
		{
			kt();
			sinh();
		}
		cout<<cnt<<endl;
		}
	}
}
