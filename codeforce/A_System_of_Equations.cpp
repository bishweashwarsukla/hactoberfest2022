#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 0; i * i <= n && i <= m; i++)
    {
        int b = n - i * i;
        if (i + b * b == m)
        {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}