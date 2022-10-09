#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    int p = 0, c = 0;
    while (t--)
    {
        int n;
        cin >> n;

        if (n > 0)
        {
            p += n;
        }
        else
        {
            if (p < 1)
            {
                c++;
            }
            else
            {
                p--;
            }
        }
    }
    cout << c << endl;
}
