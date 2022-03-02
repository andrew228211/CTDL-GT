#include<bits/stdc++.h>
using namespace std;
int n;
int p[12]={2,3,5,7,11,13,17,19,23,29,31,37};// vi n<=1000
long long Min;
/*
cong thuc so hoc
x=p^x1*p2^x2*....;
n=(x1+1)*(x2+1)*.......;
ex x=6= 2^1*3^1;
n=(1+1)*(1+1)=4;
x=12 = 2^2*3^1;
ex n=12=(2+1)*(1+1)=6;
*/
void Try(int i,long long x,int cnt)
{
	if(cnt>n) return;
	if(cnt==n) Min=min(x,Min);
	for(int j=1;j<=n;j++)
	{
		x=p[i]*x;
		if(x>Min) break;
		Try(i+1,x,cnt*(j+1));
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		Min=1e9;
		cin>>n;
		Try(0,1,1);
		cout<<Min<<endl;
	}
}
