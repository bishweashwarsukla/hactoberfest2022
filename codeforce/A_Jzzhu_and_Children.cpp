// #include <bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;
//         v.push_back(a);
//     }
//     int f = INT_MIN;
//     int MAX = *max_element(v.begin(), v.end());
//     if (m >= MAX)
//     {
//         cout << n << "\n";
//     }
//     else
//     {
//         int ans;
//         for (int i = 0; i < n; i++)
//         {
//             if (v[i] >= f)
//             {
//                 f = v[i];
//                 ans = i;
//             }
//         }

//         cout << ans + 1 << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n, m, ans;
    cin >> n >> m;
    int max(0);
    double x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        // cout << max << " " << ceil(x / m) << "\n";
        if (ceil(x / m) >= max)
        {
            ans = i;
            max = ceil(x / m);
        }
    }
    cout << ans << '\n';
    return 0;
}

// #include <bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     int n, m, ans;
//     cin >> n >> m;
//     int max(0);
//    for(int i=0;i<)
//     cout << ans << '\n';
//     return 0;
// }
