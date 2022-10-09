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

        // int x, y;
        // cin >> x >> y;
        // if (x >= y)
        // {
        //     for (int i = 0; i < y; i++)
        //     {
        //         cout << "01";
        //     }
        //     for (int i = 0; i < x - y; i++)
        //     {
        //         cout << "0";
        //     }
        // }
        int x, y;
        cin >> x >> y;
        if (x >= y)
        {
            for (int i = 0; i < y; i++)
            {
                cout << "01";
            }
            for (int i = 0; i < x - y; i++)
            {
                cout << "0";
            }
        }
        else
        {
            for (int i = 0; i < x; i++)
            {
                cout << "10";
            }
            for (int i = 0; i < y - x; i++)
            {
                cout << "1";
            }
        }
        cout << "\n";
    }
    return 0;
}