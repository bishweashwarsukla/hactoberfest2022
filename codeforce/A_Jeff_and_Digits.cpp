#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin >> n;
    vector<int> v;
    int zeros = 0, count5 = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            zeros++;
        }
        v.push_back(x);
    }
    if (zeros == 0)
    {
        cout << "-1"
             << "\n";
        // return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
        }
        while (sum)
        {
            if (sum % 9 == 0)
            {
                while (sum)
                {
                    count5++;
                    sum -= 5;
                }
                break;
            }
            else
            {
                sum -= 5;
            }
        }
        for (int i = 0; i < count5; i++)
        {
            cout << "5";
        }
        if (count5)
        {
            for (int i = 0; i < zeros; i++)
            {
                cout << "0";
            }
        }
        else
        {
            cout << "0"
                 << "\n";
        }
        cout << "\n";
    }

    return 0;
}

// #include<bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     int t;
//     cin>>t;

//     return 0;
// }