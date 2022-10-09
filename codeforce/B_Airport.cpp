#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n, m, a[1000];
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    int Min(0), value(a[0]), k(0);
    for (int i = 0; i < n; i++)
    {
        Min += value;
        value -= 1;
        if (value == 0)
        {
            value = a[++k];
        }
    }
    sort(a, a + m, greater<int>());
    int Max(0);
    while (n--)
    {
        Max += a[0];
        a[0] -= 1;
        for (int i = 1; i < m; i++)
        {
            if (a[i] <= a[i - 1])
            {
                break;
            }
            swap(a[i], a[i - 1]);
        }
    }
    cout << Max << " " << Min << "\n";

    return 0;
}