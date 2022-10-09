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
        int a, b;
        cin >> a >> b;
        int x, y;
        cin >> x >> y;
        if (a <= x && b <= y)
        {
            cout << "POSSIBLE"
                 << "\n";
        }
        else
        {
            cout << "IMPOSSIBLE"
                 << "\n";
        }
    }
    return 0;
}