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
        // vivek mc

        // int n;
        // cin >> n;
        // int arr[n];
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> arr[i];
        // }
        // int count = 0, cost = 0;
        // for (int i = 1; i < n; i++)
        // {
        //     if (arr[i] == 0)
        //     {
        //         count++;
        //     }
        //     else
        //     {
        //         if (count != 0)
        //         {
        //             cost += count + 1;
        //         }
        //         count = 0;
        //     }
        // }
        // cout << cost << endl;

        // impetus

        // int n;
        // cin >> n;
        // int *input = new int[n];
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> input[i];
        // }
        // int ans = 0;
        // for (int j = 1; j < n - 1; j++)
        // {

        //     if (input[j] == 0 && input[j + 1] == 1)
        //     {
        //         ans += 2;
        //     }
        //     else if (input[j] == 0)
        //     {
        //         ans++;
        //     }
        //     else
        //     {
        //         continue;
        //     }
        // }
        // cout << ans << "\n";
        int n;
        cin >> n;
        int *input = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        int i = 0;
        int j = n - 1;
        while (input[i] == 1)
        {
            i++;
        }
        i--;
        while (input[j] == 1)
        {
            j--;
        }
        j += 1;
        if (j > i)
        {
            cout << j - i << endl;
        }
        else
        {
            cout << "0"
                 << "\n";
        }
        // cout << j - i << "\n";
    }
    return 0;
}