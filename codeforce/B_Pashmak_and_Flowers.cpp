// #include <bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     sort(v.begin(), v.end());
//     int s(1), l(1);
//     int Max = v[n - 1] - v[0];
//     // cout << Max << "\n";
//     int number(0);
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] == v[i + 1])
//         {
//             s++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (v[i] == v[i - 1])
//         {
//             l++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     // cout << s << " " << l << "\n";
//     if (s == 0 && l == 0)
//     {
//         number = 1;
//     }
//     else if (s == 1 && l == 1)
//     {
//         number = 1;
//     }
//     else if (s == 1)
//     {
//         number = l;
//     }
//     else if (l == 1)
//     {
//         number = s;
//     }
//     else
//     {
//         number = s * l;
//     }
//     cout << Max << " " << number << "\n";
//     return 0;
// }

#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin >> n;
    int arr[200000];
    int Min = INT_MAX, Max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        Min = min(Min, arr[i]);
        Max = max(Max, arr[i]);
    }
    int s = 0, l = 0;
    for (int i = 0; i < n; i++)
    {
        s += (arr[i] == Min);
        l += (arr[i] == Max);
    }
    cout << Max - Min << " ";
    if (Max == Min)
    {
        cout << n * (n - 1) / 2;
    }
    else
    {
        cout << s * l;
    }

    return 0;
}
