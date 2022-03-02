#include<bits/stdc++.h>
using namespace std;
int k,m,n;
string dic[105];
int cnt=0;
char a[5][5];
int check[5][5];
vector<string>v;
int kt(string res)
{
	for(int i=1;i<=k;i++)
	{
		if(res==dic[i])
		{
			return 1;
		}
	}
	return 0;
}
void Try(int x,int y,string res)
{
	check[x][y]=1;
	res=res+a[x][y];
	if(kt(res)==1){
		v.push_back(res);
	}
	//cout<<res<<endl;
	for(int h=x-1;h<=x+1&&h<=m;h++)
	{
		for(int c=y-1;c<=y+1&&c<=n;c++)
		{
			if(check[h][c]==0&&c>=1&&h>=1)
			{
				Try(h,c,res);
			}
		}
	}
	res.erase(res.size()-1);
	check[x][y]=0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		v.clear();
		cin>>k>>m>>n;
		for(int i=1;i<=k;i++)
		{
			cin>>dic[i];
		}
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				Try(i,j,"");
			}
		}
		if(v.size()==0) cout<<-1;
		else 
		{
			for(int i=0;i<v.size();i++)
			{
				cout<<v[i]<<" ";
			}
		}
		cout<<endl;
	}
}
