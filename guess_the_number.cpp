#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int picked = 2;
    int guess(int a)
    {
        int ret;
        if (a == picked)
        {
            ret = 0;
        }
        else if (a > picked)
        {
            ret = -1;
        }
        else
        {
            ret = 1;
        }
        return ret;
    }

    int guessNumber(int n)
    {
        int ret;
        int a = n;
        int result = guess(a);
        if (result == -1)
        {
            ret = guessNumber(a / 2);
        }
        if (result == 1)
        {
            ret = guessNumber(2 * a);
        }
        if (result == 0)
        {
            ret = a;
        }
        return ret;
    }
};

int main()
{
    Solution obj;
    cout << obj.guessNumber(3893) << endl;

    return 0;
}