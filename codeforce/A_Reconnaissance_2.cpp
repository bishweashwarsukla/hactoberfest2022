#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> v1;
    for (int i = 0; i < n - 1; i++)
    {
        v1.push_back(abs(v[i + 1] - v[i]));
    }
    v1.push_back(abs(v[n - 1] - v[0]));
    int Min = INT_MAX;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] < Min)
        {
            Min = v1[i];
            index = i;
        }
    }
    if (index == (n - 1))
    {
        cout << index + 1 << " "
             << "1"
             << "\n";
    }
    else
    {
        cout << index + 1 << " " << index + 2 << '\n';
    }
    return 0;
}