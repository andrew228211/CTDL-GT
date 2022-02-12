#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        int x;
        for(int i=0;i<n;i++)
        {
        	if(a[i]>a[i+1])
        	{
        		x=i;
        		break;
			}
		}
		int Max=0;
		for(int i=x;i<n-1;i++)
		{
			if(a[i]>a[i+1])	
			{
				Max=max(a[i],Max);
			}
		}
		int u=0;
		for(int j=n-1;j>=0;j--)
		{
			if(a[j]<Max)
			{
				u=j;
				break;
			}
		}
		cout<<x+1<<" "<<u+1<<endl;
    }
}
