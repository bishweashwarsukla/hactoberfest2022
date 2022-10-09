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
        int a;
        cin >> a;
        vector<int> v;
        for (int i = 0; i < a; i++)
        {
            int b;
            cin >> b;
            v.push_back(b);
        }
        sort(v.begin(), v.end());
        if (a == 1)
        {
            if (v[0] == 1)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
        else
        {
            if ((v[a - 1] - v[a - 2]) > 1)
            {
                cout << "NO"
                     << "\n";
            }
            else
            {
                cout << "YES"
                     << "\n";
            }
        }
    }
    return 0;
}