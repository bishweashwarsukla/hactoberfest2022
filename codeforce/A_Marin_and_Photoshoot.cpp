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
        int l;
        cin >> l;
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < l - 1; i++)
        {
            if (s[i] == '1')
            {
                continue;
            }
            else
            {
                if (s[i] == '0' && s[i + 1] == '0')
                {
                    sum += 2;
                }
                else
                {
                    if (s[i] == '0' && s[i + 2] == '0')
                    {
                        sum += 1;
                        // i += 1;
                    }
                }
            }
        }
        cout << sum << "\n";
    }
    return 0;
}