#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
#define MOD 998244353
using namespace std;
int factorial(int p)
{
    if (p == 0)
    {
        return 0;
    }

    else
    {
        int f = 1;
        for (int i = 1; i <= p; i++)
        {
            f = (f * i) % MOD;
        }
        return f;
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int ans;
        int p = a / 2;
        int x, y;
        if (a % 2 != 0)
        {
            cout << "0"
                 << "\n";
        }
        else
        {
            x = factorial(p);
            y = factorial(p);
            ans = (x * y) % MOD;
            cout << ans % MOD << "\n";
        }
    }
    return 0;
}