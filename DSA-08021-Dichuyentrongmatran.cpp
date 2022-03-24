#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];	
int check[1004][1004];
int n,m;
struct Pair{
	int i,j,k;
};
int Tinh()
{
	queue<Pair> dq;
	Pair st;
	st.i=st.j=1;
	st.k=0;
	dq.push(st);
	while(!dq.empty()){
		Pair top;
		top = dq.front();
		dq.pop();
		if(top.i == m && top.j == n) return top.k;
		int x = top.i;
		int y = top.j;
		int x1 = x + a[x][y];
		int y1 = y + a[x][y];
		if(check[top.i+a[top.i][top.j]][top.j]==0){
			st.i=x1;
			st.j=y;
			st.k=top.k+1;
			dq.push(st);
			check[top.i+a[top.i][top.j]][top.j]=1;
		}
		if(check[top.i][top.j+a[top.i][top.j]]==0){
			st.i=x;
			st.j=y1;
			st.k=top.k+1;
			dq.push(st);
			check[top.i][top.j+a[top.i][top.j]]=1;
		}
	}
	return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		memset(check,0,sizeof(check));
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
		}
		cout<<Tinh()<<endl;
	}
}
