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
        vector<int> v;
        for (int i = 0; i < (a - 1); i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        float sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i];
        }
        int mul = b * a;
        sum = mul - sum;
        if (sum <= 0)
        {
            cout << "0"
                 << "\n";
        }
        else
        {
            cout << sum << "\n";
        }
    }
    return 0;
}