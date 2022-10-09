#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        if (v[i] < 0)
        {
            ans = ans + abs(v[i]);
        }
    }
    cout << ans << "\n";

    return 0;
}