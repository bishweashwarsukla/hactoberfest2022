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
        if (a == 0)
        {
            cout << "1"
                 << "\n";
        }
        else
        {

            cout << a + (2 * b) + 1 << "\n";
        }
    }
    return 0;
}