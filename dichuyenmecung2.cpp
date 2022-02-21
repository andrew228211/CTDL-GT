#include<bits/stdc++.h>
using namespace std;
int n;
int a[11][11];
string s;
int d;
int check[11][11];
void Try(int x,int y)
{
	if(x==n&&y==n)
	{
		cout<<s<<" ";
		d=1;
		return;
	}
	check[x][y]=1;
	if(x<n&&a[x+1][y]==1&&check[x+1][y]==0)
	{
		s+='D';
		Try(x+1,y);
		s.pop_back();
	}
	if(y>=1&&a[x][y-1]==1&&check[x][y-1]==0)
	{
		s+='L';
		Try(x,y-1);
		s.pop_back();
	}
	if(y<n&&a[x][y+1]==1&&check[x][y+1]==0)
	{
		s+='R';
		Try(x,y+1);
		s.pop_back();
	}
	if(x>=1&&a[x-1][y]==1&&check[x-1][y]==0)
	{
		s+='U';
		Try(x-1,y);
		s.pop_back();
	}
	check[x][y]=0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		d=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
		}
		s="";
		if(a[1][1]==0){
			cout<<-1<<endl;
			continue;
		}
		Try(1,1);
		if(d==0) cout<<-1;
		cout<<endl;
	}
}
