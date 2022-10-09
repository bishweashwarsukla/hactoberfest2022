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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int Min1 = min(a, b);
        int Min2 = min(c, d);
        if (Min2 > Min1)
        {
            if (Min2 <= b)
            {
                cout << Min2 << "\n";
            }
            else
            {
                cout << Min2 + Min1 << '\n';
            }
        }
        else if (Min2 == Min1)
        {
            cout << Min2 << "\n";
        }
        else
        {
            if (d >= Min1)
            {
                cout << Min1 << "\n";
            }
            else
            {
                cout << Min1 + Min2 << "\n";
            }
        }
    }
    return 0;
}