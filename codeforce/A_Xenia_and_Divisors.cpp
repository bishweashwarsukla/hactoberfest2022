#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    int a(0), b(0), c(0), d(0), e(0);
    vector<int> v;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            a++;
        }
        else if (v[i] == 2)
        {
            b++;
        }
        else if (v[i] == 3)
        {
            c++;
        }
        else if (v[i] == 4)
        {
            d++;
        }
        else if (v[i] == 6)
        {
            e++;
        }
        else
        {
            continue;
        }
    }
    int check = 0;
    while ((a != 0 && b != 0 && d != 0) || (a != 0 && b != 0 && e != 0) || (a != 0 && c != 0 && e != 0))
    {
        if (a != 0 && b != 0 && d != 0)
        {
            cout << "1 2 4"
                 << "\n";
            a--;
            b--;
            d--;
            check++;
        }
        if (a != 0 && b != 0 && e != 0)
        {
            cout << "1 2 6"
                 << "\n";
            a--;
            b--;
            e--;
            check++;
        }
        if (a != 0 && c != 0 && e != 0)
        {
            cout << "1 3 6"
                 << "\n";
            a--;
            c--;
            e--;
            check++;
        }
    }
    if (check == 0)
    {
        cout << "-1\n";
    }
    return 0;
}