#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
void solution()
{
    string s;
    cin >> s;
    char a = s[0];
    int count(1);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == a)
        {
            count++;
        }
        else
        {
            if (count < 2)
            {
                cout << "NO\n";
                return;
            }
            count = 1, a = s[i];
        }
    }
    if (count <= 1)
    {
        cout << "NO"
             << "\n";
        return;
    }
    cout << "YES"
         << "\n";
    return;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}