#include <bits/stdc++.h>
using namespace std;
int n, s;
int a[105];
string ans;
void Try(int i, int tmp)
{
    if (ans == "YES")
        return;
    if (2 * tmp == s)
    {
        ans = "YES";
        return;
    }
		if(i<s)
		{
			Try(i+1,tmp+a[j]);
		}
		Try(i+1,tmp);
	}
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        s = 0;
        ans = "NO";
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        if (s % 2 == 0)
            Try(0, 0);
        cout << ans << endl;
    }
}
