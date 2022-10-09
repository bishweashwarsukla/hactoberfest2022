// #include <bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     string s;
//     cin >> s;
//     string ans;
//     // cout << ans.size();
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == 'h' && ans.size() == 0)
//         {
//             ans[0] = 'h';
//         }
//         else if (s[i] == 'e' && ans.size() == 1)
//         {
//             ans[1] = 'e';
//         }
//         else if (s[i] == 'l' && ans.size() == 2)
//         {
//             ans[2] = 'l';
//         }
//         else if (s[i] == 'l' && ans.size() == 3)
//         {
//             ans[3] = 'l';
//         }
//         else if (s[i] == 'o' && ans.size() == 4)
//         {
//             ans[4] = 'o';
//         }
//         else
//         {
//             continue;
//         }
//     }
//     cout << ans << "\n";
//     return 0;
// }

#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s;
    cin >> s;
    vector<char> s1;
    // int h=0,l=0,e=0,o=0;
    if (s.size() < 5)
    {
        cout << "NO"
             << "\n";
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'h' && s1.size() == 0)
            {
                s1.push_back(s[i]);
                // h++;
            }
            else if (s[i] == 'e' && s1.size() == 1)
            {
                s1.push_back(s[i]);
                // e++;
            }
            else if (s[i] == 'l' && s1.size() == 2)
            {
                s1.push_back(s[i]);
                // l++;
            }
            else if (s[i] == 'l' && s1.size() == 3)
            {
                s1.push_back(s[i]);
                // l++;
            }
            else if (s[i] == 'o' && s1.size() == 4)
            {
                s1.push_back(s[i]);
                // o++;
            }
        }
        string p = "hello";

        bool flag = true;
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] != s1[i])
            {
                flag = false;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}