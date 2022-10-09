#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s;
    cin >> s;
    bool flag = true;
    ;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
        {
            i += 2;
        }
        else if (s[i] == '1' && s[i + 1] == '4')
        {
            i += 1;
        }
        else if (s[i] == '1')
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