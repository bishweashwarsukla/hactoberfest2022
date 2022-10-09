#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
signed main()
{
    int a, b;
    cin >> a >> b;
    bool flag = true;
    // if((a==2 && b==3) || (a==3 && b==5) || (a==5 && b==7) || (a==7 && b==11) || (a==11 && b==13) || (a==13 && b==17) ||(a==1 && b==43) || )
    for (int i = a + 1; i <= b; i++)
    {
        if (isPrime(i))
        {
            if (i == b)
            {
                cout << "YES"
                     << "\n";
                break;
            }
            else
            {
                cout << "NO"
                     << "\n";
                break;
            }
            flag = false;
        }
        if (i == b)
        {
            if (flag)
            {
                cout << "NO"
                     << "\n";
            }
        }
    }
}