#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[20];
int cnt=0;
int sum=0;
int Try(int i,int cnt,int s)
{
	if(cnt>k)
	{
		return 0;
	}
	if(i==n+1) 
	{
		if(cnt==k) return 1;
		else return 0;
	}
	int ans=0;
	for(int j=i;j<=n;j++)
	{
		s+=a[j];// tong day con lien tiep
		if(sum==s)
		{
			ans+=Try(j+1,cnt+1,0);
		}	
	}
	return ans;
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++){
	 cin>>a[i];
	 sum+=a[i];
	}
	if(sum%k!=0)
	{
		cout<<0;
	}
	else{
		sum=sum/k;
		cout<<Try(1,0,0);
	}
	
	
}

