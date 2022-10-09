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
        int a, b, c;
        cin >> a >> b >> c;
        // vector<int> v;
        //  for (int i = a; i <= b; i++)
        //  {
        //      int ans = 0;
        //      ans = ((i / c) + (i % c));
        //      v.push_back(ans);
        //  }
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }

        // cout << *max_element(v.begin(), v.end()) << "\n";
        //  int x = a / c;
        //  int remx = a % c;
        //  int y = b / c;
        //  int remy = b % c;
        //  if (x == y)
        //  {
        //      cout << (y + remy) << "\n";
        //  }
        //  else
        //  {
        //      cout << max(y + remy, y + c - 2) << "\n";
        //  }
        int ans = 0;
        if (a == b)
        {
            cout << "1"
                 << "\n";
        }
        else if (b % c == 0)
        {
            b = b - 1;
            ans = ((b / c) + b % c);
            cout << ans << "\n";
        }
        else
        {
            ans = ((b / c) + b % c);
            cout << ans << "\n";
        }
    }
    return 0;
}