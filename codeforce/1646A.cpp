#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int ans = n * n;
        // int i = 0, count = 0;
        // while (i <= sqrt(s))
        // {
        //     i += ans;
        //     if (i <= s)
        //     {
        //         count++;
        //     }
        // }
        cout << s / ans << "\n";
    }
    return 0;
}