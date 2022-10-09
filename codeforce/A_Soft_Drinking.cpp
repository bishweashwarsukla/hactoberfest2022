#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int tl = (k * l) / nl;
    int limes = c * d;
    int gram = p / np;
    // cout << tl << " " << limes << " " << gram << "\n";
    cout << min(min(tl, limes), gram) / n << "\n";
    return 0;
}