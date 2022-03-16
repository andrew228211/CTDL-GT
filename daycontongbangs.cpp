#include <bits/stdc++.h>
using namespace std;
main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	int n,s;
  	cin>>n>>s;
  	int a[n+5];
  	int L[40005]={0};// luu tru cac tong
  	for(int i=1;i<=n;i++)
  	{
  		cin>>a[i];
	}
	L[0]=1;L[s]=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=s;j>=a[i];j--)
		{
			if(L[j]==0&&L[j-a[i]]==1)
			{
				L[j]=1;
			}
		}
	}
	if(L[s]==1) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
  }
}
