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
//             int x;
//             cin >> x;
//             v.push_back(x);
//         }
//         int count = 0;
//         for (int i = 0; i < (v.size() - 1); i++)
//         {
//             for (int j = i + 1; j < v.size(); j++)
//             {
//                 if ((v[i] * v[j]) > 0)
//                 {
//                     count++;
//                 }
//             }
//         }
//         cout << count << "\n";
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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int pos = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                pos++;
            }
            else if (v[i] < 0)
            {
                neg++;
            }
        }
        pos = pos - 1;
        neg = neg - 1;
        pos = (pos * (pos + 1)) / 2;
        neg = (neg * (neg + 1) / 2);
        cout << pos + neg << "\n";
    }
    return 0;
}