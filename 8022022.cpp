#include<bits/stdc++.h>
using namespace std;
int n,k;
struct Danhsach{
	int num,ber,index;
};
/*
2
5 7
10 5 3 9 2
6 6
1 8 3 4 7 6
*/
bool sx(Danhsach a,Danhsach b)
{
	if(a.ber > b.ber) { 
   return false;
    }
    if(a.ber == b.ber && a.index > b.index) {
 return false;
 } 
 return true;
}
int main()
{
	Danhsach ds[10005];
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
	int m;
	for(int i=0;i<n;i++)
	{
		cin>>ds[i].num;
		ds[i].index=i;
		ds[i].ber=abs(k-ds[i].num);
	}
	sort(ds,ds+n,sx);
	for(int i=0;i<n;i++)
	{
		cout<<ds[i].num<<" ";
	}
	cout<<endl;
	}
}
