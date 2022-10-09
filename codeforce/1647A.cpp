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
        int ans = 0;
        if (a <= 2)
        {
            cout << a << "\n";
        }
        else
        {

            if (a % 3 == 0)
            {
                int b = a / 3;
                while (b--)
                {
                    cout << "21";
                }
                cout << "\n";
            }
            else if (a % 3 == 1)
            {
                int b = a / 3;
                while (b--)
                {
                    cout << "12";
                }
                cout << "1"
                     << "\n";
            }
            else
            {
                int b = a / 3;
                while (b--)
                {
                    cout << "21";
                }
                cout << "2"
                     << "\n";
            }
        }
    }
    return 0;
}