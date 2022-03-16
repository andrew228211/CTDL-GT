#include<bits/stdc++.h>
using namespace std;
/*
2
abcbadd
aaaaa
*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int ans=1;
		int n=s.size();
		int f[1011][1011];
		memset(f,0,sizeof(f));
		int x;
		for(int i=0;i<n;i++) f[i][i]=1;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<n-i;j++)
			{
				x=i+j;
				if(s[j]==s[x]&&i>1)
				{
					f[j][x]=f[j+1][x-1];
				}
				else if(s[j]==s[x]&&i==1)
				{
					f[j][x]=1;
				}
				else f[j][x]=0;
				if(f[j][x]==1)
				{
					ans=max(ans,x-j+1);
				}
			}
		}
		cout<<ans<<endl;
	}
}
