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
        // int a, b;
        // cin >> a >> b;
        // // int firstR = 0, lastR = 0;
        // char arr[a][b];
        // for (int i = 0; i < a; i++)
        // {
        //     for (int j = 0; j < b; j++)
        //     {
        //         char x;
        //         cin >> arr[i][j];
        //     }
        // }
        // bool flag = true;
        // vector<int> v;
        // for (int i = 0; i < a; i++)
        // {
        //     for (int j = 0; j < b; j++)
        //     {
        //         if (arr[i][j] == 'R')
        //         {
        //             v.push_back(j);
        //         }
        //     }
        // }
        // // for (int i = 0; i < v.size(); i++)
        // // {
        // //     cout << v[i] << "\n";
        // // }
        // for (int i = 0; i < v.size() - 1; i++)
        // {
        //     for (int j = i + 1; j < v.size(); j++)
        //     {
        //         if (v[i] > v[j])
        //         {
        //             flag = false;
        //             break;
        //         }
        //     }
        // }
        // if (flag)
        // {
        //     cout << "YES\n";
        // }
        // else
        // {
        //     cout << "NO\n";
        // }
        int a, b;
        cin >> a >> b;
        char arr[a][b];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
                cin >> arr[i][j];
        }

        bool t = true;
        int x = a;
        int f = b;
        for (int i = 0; i < a; i++)
        {
            bool q = false;
            for (int j = 0; j < b; j++)
            {

                if (arr[i][j] == 'R')
                {
                    x = i;
                    f = j;
                    q = true;
                    break;
                }
            }
            if (q)
                break;
        }
        if (x == a)
        {
            cout << "NO\n";
        }
        else
        {
            for (int i = x + 1; i < a; i++)
            {
                bool q = false;
                for (int j = 0; j < b; j++)
                {
                    if ((arr[i][j] == 'R') && (j < f))
                    {

                        t = false;
                        break;
                    }
                }
                if (q)
                    break;
            }
            if (t)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}