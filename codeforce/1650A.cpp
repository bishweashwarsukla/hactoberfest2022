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
        char a;
        cin >> a;
        vector<int> v;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == a)
            {
                v.push_back(i);
            }
        }
        bool flag = false;
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }
        if (s.size() == 1 && s[0] == a)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] % 2 == 0)
                {
                    flag = true;
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
        }

        // bool flag = false;
        // if (s.size() <= 2)
        // {

        //     cout << "NO"
        //          << "\n";
        // }
        // else
        // {
        //     for (int i = 2; i < s.size(); i++)
        //     {
        //         if (s[i] == a)
        //         {
        //             flag = true;
        //             break;
        //         }
        //     }
        //     if (flag)
        //     {
        //         cout << "YES"
        //              << "\n";
        //     }
        //     else
        //     {
        //         cout << "NO"
        //              << "\n";
        //     }
        // }

        // bool flag = false;
        // for (int i = 0; i < s.size(); i++)
        // {
        //     if (s[i] == a)
        //     {
        //         int li = i;
        //         int ri = s.size() - (i + 1);
        //         if (li % 2 == 0 && ri % 2 == 0)
        //         {
        //             flag = true;
        //             break;
        //         }
        //     }
        // }
        // if (flag)
        // {
        //     cout << "YES"
        //          << "\n";
        // }
        // else
        // {
        //     cout << "NO"
        //          << "\n";
        // }
    }
    return 0;
}