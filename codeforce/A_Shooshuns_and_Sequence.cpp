// #include <bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     k = v[k - 1];
//     bool flag = true;
//     for (int i = k; i < n; i++)
//     {
//         if (v[i] != k)
//         {
//             flag = false;
//             break;
//         }
//     }
//     if (flag)
//     {
//         bool flag1 = true;
//         int count = 0;
//         for (int i = k; i >= 0; i--)
//         {
//             if (v[i] == k)
//             {
//                 continue;
//             }
//             else
//             {
//                 count++;
//                 break;
//             }
//             if(i==0 && count!=k){
//                 count=k;
//             }
//         }

//     }
//     else
//     {
//         cout << "-1"
//              << "\n";
//     }

//     return 0;
// }

#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n, k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    
    return 0;
}