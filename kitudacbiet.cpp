#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
long long n;
long long Try(long long i)
{
	if(n<=s.size())
	{
		return n-1;
	}
	if(n>i/2)
	{
		n=n-i/2-1;// xac dinh vi tri n ben phai va tru di de ra nua trai 
	}
	if(n==0) n=i/2;// tim o vi tri giua mag
	Try(i/2);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s>>n;
		long long  i=s.size();
		while(i<n) i=i*2;// tim kiem vi tri 
		cout<<s[Try(i)]<<endl;
	}
}
