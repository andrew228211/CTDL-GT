#include<bits/stdc++.h>
using namespace std;
int xuoi[100]={0},nguoc[100]={0},a[100]={0},x[100];
int n;
int cnt;
void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(!a[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1])
        {
            x[i]=j;
            a[j]=1;
            xuoi[i-j+n]=1;
            nguoc[i+j-1]=1;
            if(i==n) cnt++;
            else Try(i+1);
            a[j]=0;
            xuoi[i-j+n]=0;
            nguoc[i+j-1]=0;
        }
    }
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cnt=0;
    	Try(1);
    	cout<<cnt<<endl;
    	xuoi[100]={0},nguoc[100]={0},a[100]={0};
	}
}
