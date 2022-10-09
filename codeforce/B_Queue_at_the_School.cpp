#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    while (b--)
    {
        for (int i = 1; i < a; i++)
        {
            if (s[i - 1] == 'B' && s[i] == 'G')
            {
                s[i - 1] = 'G';
                s[i] = 'B';
                i++;
            }
        }
    }
    cout << s << "\n";

    return 0;
}