#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    bool flag = true;
    map<char, int> mp;
    for (int i = 0; i < s1.size(); i++)
    {
        mp[s1[i]]++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (mp[s2[i]] > 0)
        {
            mp[s2[i]]--;
            continue;
        }
        else if (s2[i] == ' ')
        {
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
    return 0;
}