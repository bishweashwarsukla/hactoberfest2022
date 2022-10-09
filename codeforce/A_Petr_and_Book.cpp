// #include <bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < 7; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     int total = 0;
//     for (int i = 0; i < 7; i++)
//     {
//         total += v[i];
//     }

//     // if (n / total == 0)
//     // {
//     //     cout << "7"
//     //          << "\n";
//     // }

//     // else
//     // {
//     int y = n % total;
//     if (y == 0)
//     {
//         if (n == total)
//         {
//             cout << "7"
//                  << "\n";
//         }
//         else
//         {
//             n = total % n;
//             for (int i = 0; i < 7; i++)
//             {
//                 n -= v[i];
//                 if (n <= 0)
//                 {
//                     cout << i + 1 << "\n";
//                     break;
//                 }
//             }
//         }
//     }
//     else
//     {
//         n = n % total;
//         for (int i = 0; i < 7; i++)
//         {
//             n -= v[i];
//             if (n <= 0)
//             {
//                 cout << i + 1 << "\n";
//                 break;
//             }
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i(0), a[7];
    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    int total = a[0];
    while (total < n)
    {
        i++;
        i %= 7;
        total += a[i];
    }
    cout << i + 1 << "\n";
    return 0;
}