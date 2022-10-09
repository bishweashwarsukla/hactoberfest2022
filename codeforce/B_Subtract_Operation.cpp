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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int Min = *min_element(v.begin(), v.end());
        int size = n + 1;
        while (size--)
        {
            int index = -1;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == Min)
                {
                    index = i;
                    v.pop_back(Min);
                }
            }
        }
    }
    return 0;
}