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
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        if (mp.size() == 1)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            bool flag = true;
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (mp[s[i]] > 1)
                {
                    set<char> st;
                    int k = i + 1;
                    while (s[k] != s[i])
                    {
                        st.insert(s[k]);
                        k++;
                    }
                    if (st.size() < mp.size() - 1)
                    {
                        flag = false;
                        break;
                    }

                    mp[s[i]]--;
                }
            }
            if (flag)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}