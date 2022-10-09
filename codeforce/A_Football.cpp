#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t2;
    int c1 = 1, c2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        // cout << "hi"
        //      << "\n";
        string s2;
        cin >> s2;
        if (s == s2)
        {
            c1++;
        }
        else
        {
            t2 = s2;
            c2++;
        }
    }
    if (c1 > c2)
    {
        cout << s << "\n";
    }
    else
    {
        cout << t2 << '\n';
    }
    return 0;
}