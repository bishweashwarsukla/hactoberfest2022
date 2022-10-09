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
        int a;
        cin >> a;
        if (a > 19)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
            for (int i = 0; i < a; i++)
            {
                int ans = pow(3, i);
                cout << ans << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}