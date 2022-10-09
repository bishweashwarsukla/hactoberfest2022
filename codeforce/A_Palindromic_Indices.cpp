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
        string s;
        cin >> s;
        int count_odd = 1;
        int count_even = 1;
        if (n % 2 != 0)
        {
            int i = n / 2;
            while (i > 0)
            {
                if (s[i] == s[i - 1])
                {
                    count_odd++;
                    i--;
                }
                else
                {
                    break;
                }
            }
            if (count_odd == 1)
            {
                cout << count_odd << "\n";
            }
            else
            {
                cout << count_odd + count_odd - 1 << "\n";
            }
        }
        else
        {
            int i = n / 2 - 1;
            while (i > 0)
            {
                if (s[i] == s[i - 1])
                {
                    count_even++;
                    i--;
                }
                else
                {
                    break;
                }
            }
            cout << count_even * 2 << "\n";
        }
    }
    return 0;
}