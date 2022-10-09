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
        a = a - 1;
        if (b <= 1000 && b >= -1000)
        {
            while (a--)
            {
                cout << "0"
                     << " ";
            }
            cout << b << "\n";
        }
    }
    return 0;
}