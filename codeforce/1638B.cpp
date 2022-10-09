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
        int newArr[n];
        for (int i = 0; i < n; i++)
        {
            newArr[i] = arr[i];
        }
        sort(newArr, newArr + n);
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                if ((arr[i + 1] + arr[i]) % 2 != 0)
                    swap(arr[i], arr[i + 1]);
            }
        }
        for (int j = n - 1; j >= 1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                if ((arr[j] + arr[j - 1]) % 2 != 0)
                    swap(arr[j], arr[j - 1]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != newArr[i])
            {
                flag = false;
                break;
            }
        }
        // for (int i = 0; i < n; i++)
        // {

        //     cout << arr[i] << " " << newArr[i] << "\n";
        // }
        if (flag)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}