#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int a;
    cin >> a;
    int *arr = new int[a];
    if (a % 2 != 0)
    {
        cout << "-1"
             << "\n";
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            arr[i - 1] = i;
        }
        for (int i = 0; i < a; i += 2)
        {
            swap(arr[i], arr[i + 1]);
        }
        for (int i = 0; i < a; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}