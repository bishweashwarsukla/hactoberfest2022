#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin >> t;

    int count = 0;
    vector<int> v;
    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    for (int i = 1; i <= 5; i++)
    {

        if ((sum + i) % (t + 1) != 1)
        {
            count++;
        }
    }
    // vector<int> v1;
    // v1.push_back(1);
    // for(int i=1;i<5;i++){

    // }
    cout << count << "\n";

    return 0;
}