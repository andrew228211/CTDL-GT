#include<bits/stdc++.h>
using namespace std;
int mode =1e9+7;
long long Try(long long n,long long k)
{
	if(k==0) return 1;
	if(k==1) return n%mode;
	long long tmp=Try(n,k/2);
	tmp=tmp*tmp%mode;
	if(k%2==1) return tmp*n%mode;
	else return tmp%mode;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		cout<<Try(n,k)<<endl;
	}
}
