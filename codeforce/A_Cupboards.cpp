#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    vector<int> v1;
    vector<int> v2;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        v1.push_back(a);
        v2.push_back(b);
    }
    int o1 = 0, o2 = 0, a1 = 0, a2 = 0;

    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] == 0)
        {
            o1++;
        }
    }
    a1 = v1.size() - o1;
    int MIN1 = min(a1, o1);
    for (int i = 0; i < v2.size(); i++)
    {
        if (v2[i] == 0)
        {
            o2++;
        }
    }
    a2 = v2.size() - o2;
    int MIN2 = min(o2, a2);
    cout << MIN1 + MIN2 << "\n";
    return 0;
}