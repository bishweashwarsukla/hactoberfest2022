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
        int total = pow(2, a);
        if (total <= 2)
        {
            cout << "1" << '\n';
        }
        else
        {
            cout << total - 1 << "\n";
        }
    }
    return 0;
}