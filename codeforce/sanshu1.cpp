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
//         int a;
//         cin >> a;
//         vector<int> v;
//         for (int i = 0; i < a; i++)
//         {
//             int b;
//             cin >> b;
//             v.push_back(b);
//         }
//         sort(v.begin(), v.end());
//         int sum = 0;
//         for (int i = 0; i < a; i += 2)
//         {
//             sum += (v[i] + v[i + 1]) * 2;
//         }
//         cout << sum << "\n";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     int t;
//     cin >> t;
//     int sum = 0;
//     while (t--)
//     {
//         int a;
//         cin >> a;
//         int size = 2 * a;
//         vector<int> v;
//         while (size--)
//         {
//             int x, y;
//             cin >> x >> y;
//             v.push_back(y);
//         }
//         sort(v.begin(), v.end());
//         for (int i = 0; i < (2 * a); i += 2)
//         {
//             if (v[i] == v[i + 1])
//             {
//                 continue;
//             }
//             else
//             {
//                 sum++;
//             }
//         }
//         cout << sum << "\n";
//     }
//     return 0;
// }