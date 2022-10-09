#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    vector<int> v;
    for (int i = 0; i < 4; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int Max = *max_element(v.begin(), v.end());
    for (int i = 0; i < 4; i++)
    {
        if (v[i] == Max)
        {
            continue;
        }
        else
        {
            cout << Max - v[i] << " ";
        }
    }
    cout << "\n";
    return 0;
}