#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5],f[n+5];
	for(int i=1;i<=n;i++) {
	cin>>a[i];
	}
	int ans=0;
	for (int i = 1; i <= n; ++i) {
        f[i] = 1;
        for (int j = 1; j < i; ++j) {
            if (a[j] <= a[i] && f[j] + 1 > f[i]) {
                f[i] = f[j] + 1;
            }
        }
        ans=max(ans,f[i]);
    }
	cout<<ans;
}
