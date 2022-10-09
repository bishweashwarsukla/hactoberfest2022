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
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v1.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v2.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            if (v1[i] > v2[i])
            {
                swap(v1[i], v2[i]);
            }
        }
        int sum1 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum1 += abs(v1[i] - v1[i + 1]);
        }
        int sum2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum1 += abs(v2[i] - v2[i + 1]);
        }
        cout << sum1 + sum2 << "\n";
    }
    return 0;
}