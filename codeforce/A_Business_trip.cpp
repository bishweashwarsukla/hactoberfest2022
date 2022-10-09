#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin >> n;
    vector<int> v;
    int ans = 0;
    for (int i = 0; i < 12; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    if (n == 0)
    {
        cout << "0"
             << "\n";
    }
    else
    {

        for (int i = 11; n > 0; i--)
        {
            n -= v[i];
            ans++;
        }
        if (ans > 12)
        {
            cout << "-1"
                 << "\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }

    return 0;
}