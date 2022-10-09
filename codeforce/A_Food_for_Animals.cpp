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
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        bool cat = false;
        bool dog = false;
        if (a >= x)
        {
            dog = true;
        }
        else
        {
            x -= a;
        }
        if (b >= y)
        {
            cat = true;
        }
        else
        {
            y -= b;
        }
        if (cat == true && dog == true)
        {
            cout << "YES\n";
        }
        else
        {
            if (dog == false && cat == true)
            {
                if (c >= x)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else if (dog == true && cat == false)
            {
                if (c >= y)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                if (c >= (x + y))
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }
    return 0;
}