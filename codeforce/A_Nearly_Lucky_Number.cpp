#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            ans++;
        }
    }
    // cout << ans << "\n";
    bool flag = true;
    if (ans < 4)
    {
        cout << "NO" << '\n';
    }
    else
    {
        while (ans > 0)
        {
            if (ans % 10 == 4 || ans % 10 == 7)
            {
                ans /= 10;
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
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

    return 0;
}