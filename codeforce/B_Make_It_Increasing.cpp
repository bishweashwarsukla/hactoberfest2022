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
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        bool check = false;
        int count = 0;
        int i = 1;
        while (i == v.size() - 1)
        {
            if (v[i] <= v[i - 1])
            {
                v[i - 1] = v[i - 1] / 2;
                count++;
                break;
            }
        }
        cout << count << "\n";
    }
    return 0;
}