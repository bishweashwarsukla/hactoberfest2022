// #include <bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v;
//         while (n--)
//         {
//             int x;
//             cin >> x;
//             v.push_back(x);
//         }
//         vector<int> v1;
//         for (int i = 0; i < v.size(); i++)
//         {
//             v1.push_back(v[i + 1] - v[i]);
//         }
//         // cout << diff.size() << "\n";
//         bool flag = true;
//         int count = 0;
//         for (int i = 0; i < v1.size(); i++)
//         {
//             if (v1[i] > 2)
//             {
//                 flag = false;
//                 count++;
//             }
//         }
//         if (flag)
//         {
//             if (count < 2)
//             {
//                 cout << "YES"
//                      << "\n";
//             }
//             else
//             {
//                 cout << "NO\n";
//             }
//         }
//         else
//         {
//             cout << "NO\n";
//         }
//     }

//     return 0;
// }
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
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans(0);
        for (int i = 0; i < n - 1; i++)
        {
            ans += arr[i + 1] - arr[i] - 1;
        }
        if (ans <= 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}