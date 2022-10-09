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
        string s1, s2;
        cin >> s1 >> s2;
        // set<char> s;
        // int j = 0;
        // for (int i = 0; i < s1.size(); i++)
        // {
        //     if (s1[i] == s2[j])
        //     {
        //         s.insert(s1[i]);
        //         j++;
        //     }
        // }
        // if()
        vector<char> v;
        for (int i = 0; i < s2.size(); i++)
        {
            for (int j = 0; j < s1.size(); j++)
            {
                if (s2[i] == s1[j])
                {
                    v.push_back(s2[i]);
                }
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}