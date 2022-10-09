#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (char i : s)
    {
        mp[i]++;
    }
    int odd = 0;
    for (auto i : mp)
    {
        if (i.second % 2 == 1)
        {
            odd++;
        }
    }
    if (odd % 2 == 1 || odd == 0)
    {
        cout << "First\n";
    }
    else
    {
        cout << "Second\n";
    }

    return 0;
}