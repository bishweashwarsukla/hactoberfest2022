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
        int a;
        cin >> a;
        vector<int> v;
        for (int i = 0; i < a; i++)
        {
            int y;
            cin >> y;
            v.push_back(y);
        }
        int Max = *max_element(v.begin(), v.end());
        int Min = *min_element(v.begin(), v.end());
        // cout << Max << " " << Min << "\n";
        if (a == 1)
        {
            cout << "1"
                 << " "
                 << "1"
                 << "\n";
        }
        else
        {

            // bool flag = false;

            int f = 0, l = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == Min)
                {
                    f = i + 1;
                    break;
                }
            }
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == Max)
                {
                    l = i + 1;
                    break;
                }
            }
            if (f > l)
            {
                cout << l << " " << f << "\n";
            }
            else
            {
                cout << f << " " << l << "\n";
            }
        }
    }
    return 0;
}
