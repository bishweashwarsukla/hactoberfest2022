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
        int *input = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        sort(input, input + n);
        int sumR = 0, sumB = input[0];
        int i = 1;
        int j = n - 1;
        bool flag = false;
        while (i <= j)
        {
            sumR += input[j];
            sumB += input[i];
            if (sumB < sumR)
            {
                flag = true;
                break;
            }
            i++;
            j--;
        }
        if (flag)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}