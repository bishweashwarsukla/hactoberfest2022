// #include <bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int ans = 0;
//         if (s.size() % 2 == 0)
//         {
//             for (int i = 0; i < s.size(); i++)
//             {
//                 ans += (s[i] - 96);
//             }
//             cout << "Alice " << ans << "\n";
//         }
//         else if (s.size() == 1)
//         {
//             cout << "Bob " << s[0] - 96 << "\n";
//         }
//         else if (s.size() % 2 != 0)
//         {
//             {
//                 int small = INT_MAX;
//                 for (int i = 0; i < s.size(); i++)
//                 {
//                     if ((s[i] - 96) <= small)
//                     {
//                         small = (s[i] - 96);
//                     }
//                     ans += (s[i] - 96);
//                 }
//                 cout << "Alice " << (ans - (2 * small)) << "\n";
//             }
//         }
//     }
// }

#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define mp make_pair
#define mine(a) (min_element((a).begin(), (a).end()))
#define maxe(a) (max_element((a).begin(), (a).end()))
#define M (ll)1000000007
using namespace std;
void solve()
{
    string x;
    cin >> x;
    int ans = 0;
    if (x.length() == 1)
    {
        cout << "Bob " << x[0] - 'a' + 1;
        return;
    }
    if (x.length() % 2 == 0)
    {
        cout << "Alice ";
        for (int i = 0; i < x.length(); i++)
        {
            ans += x[i] - 'a' + 1;
        }
        cout << ans;
    }
    else
    {
        ans = 0;
        cout << "Alice ";
        for (int i = 0; i < x.length(); i++)
        {
            ans += x[i] - 'a' + 1;
        }
        int a = x[0] - 'a' + 1;
        int n = x.length();
        int b = x[n - 1] - 'a' + 1;
        int c = min(a, b);
        ans = ans - 2 * c;
        cout << ans;
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}