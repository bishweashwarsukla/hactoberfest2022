#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int x, y, z, l, b, h;
    cin >> x >> y >> z;
    l = sqrt((x * y) / z);
    b = sqrt((x * z) / y);
    h = sqrt((y * z) / x);
    cout << 4 * (l + b + h) << "\n";
    return 0;
}