#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s;
    cin >> s;
    int l = s.size();
    vector<int> v;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '.')
        {
            v.push_back(0);
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            v.push_back(1);
            i++;
        }
        else
        {
            if (s[i] == '-' && s[i + 1] == '-')
                v.push_back(2);
            i++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << "\n";
    return 0;
}