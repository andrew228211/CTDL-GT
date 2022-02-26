#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100],check[100];
int s,x;
void Try(int sum,int cnt)
{
	if(cnt==k) {
		x=1;
		return;
	}
	if(x==1) return;
	for(int j=1;j<=n;j++)
	{
			if(sum==s) Try(0,cnt+1);
			else if (sum<s) Try(sum+a[j],cnt);
			else return;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		s=0;
		check[100]={0};
		x=0;
		for(int i=1;i<=n;i++){
		cin>>a[i];
		s+=a[i];
		}
		 if(s%k!=0){
		 	cout<<0<<endl;
		 	continue;
		 }
		 Try(0,0);	
		 if(x==0) cout<<0;
		 else cout<<1;
		 cout<<endl;	
	}
}
