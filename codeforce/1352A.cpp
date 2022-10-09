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
        int n;
        cin >> n;
        int ans = 0;
        vector<int> v;
        int count = 0;
        while (n > 0)
        {
            if (n % 10 != 0)
            {
                ans = (n % 10) * pow(10, count);
                v.push_back(ans);
            }
            count++;
            n = n / 10;
        }
        cout << v.size() << "\n";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        // cout << "pan" << endl;
        cout << "\n";
    }
    return 0;
}