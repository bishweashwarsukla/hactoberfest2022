// #include <bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     int t;
//     cin >> t;
//     vector<int> v;
//     for (int i = 0; i < t; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     int ans = 0;
//     set<int> s;
//     for (int i = 0; i < t; i++)
//     {
//         s.insert(v[i]);
//     }
//     if (s.size() != t)
//     {
//         cout << "Still Rozdil"
//              << "\n";
//     }
//     else
//     {
//         int minElement = INT_MAX;
//         for (int i = 0; i < t; i++)
//         {
//             if (v[i] < minElement)
//             {
//                 minElement = v[i];
//                 ans = i;
//             }
//         }
//         cout << ans + 1 << "\n";
//         // cout << ans + 1 << "\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int idx = 0;
    int min = arr[0];
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (min == arr[i])
        {
            flag = true;
        }
        if (min > arr[i])
        {
            min = arr[i];
            flag = false;
            idx = i;
        }
    }

    if (flag)
        cout << "Still Rozdil\n";
    else
        cout << idx + 1 << '\n';

    return 0;
}
