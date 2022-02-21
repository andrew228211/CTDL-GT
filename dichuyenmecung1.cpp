#include<bits/stdc++.h>
using namespace std;;
int n;
int a[100][100];
string s;
int d;
void Try(int x,int y)
{
	if(x==n&&y==n){
		cout<<s<<" ";
		d=1;
		return;
	}
	if(a[x+1][y]==1)
	{
		s+='D';
		Try(x+1,y);
		s.pop_back();
	}
	if(a[x][y+1]==1)
	{
		s+='R';
		Try(x,y+1);
		s.pop_back();
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		s="";
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		d=0;
		if(a[1][1]==0) {
		cout<<-1<<endl;continue;}
		Try(1,1);
		if(d==0) cout<<-1; 
		cout<<endl;
	}
}
