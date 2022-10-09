#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n, m;
    cin >> n >> m;
    char arr[110][110];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '.')
            {
                if ((i + j) % 2 == 0)
                {
                    arr[i][j] = 'B';
                }
                else
                {
                    arr[i][j] = 'W';
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }
    return 0;
}