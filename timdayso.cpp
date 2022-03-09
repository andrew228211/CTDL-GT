#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define sort(a) sort(a.begin(), a.end())
const int oo = 1e9 + 7;
using namespace std;

int n;
vector<int> a;

int calc(int MIN)
{
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        int x = a[j] / MIN;
        while (a[j] / (x - 1) == MIN)
            x--;
        sum += x;
    }
    return sum;
}
void solve()
{
    cin >> n;
    a.clear();
    a.resize(n);
    int MIN = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        MIN = min(MIN, a[i]);
    }
    MIN /= 2;
    int sum;
    for (; MIN > 1; MIN--)
    {
        bool flag = true;
        sum = 0;
        for (int j = 0; j < n; j++)
            if (a[j] / MIN <= a[j] % MIN)
            {
                flag = false;
                break;
            }
        if (flag)
            break;
    }
    cout << calc(MIN);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}
