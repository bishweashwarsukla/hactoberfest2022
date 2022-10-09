#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string s;
    cin >> s;
    int diffx(0), diffy(0), count(0);
    int ei(0), si(0), wi(0), ni(0);
    if (ex > sx)
    {
        diffx = ex - sx; // count E
        count = diffx;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'E' && diffx != 0)
            {
                diffx -= 1;
                ei = i + 1;
            }
        }
    }
    else if (sx > ex)
    {
        diffx = sx - ex; // count W
        count = diffx;

        // cout << diffx << "\n";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'W' && diffx != 0)
            {
                diffx -= 1;
                wi = i + 1;
            }
        }
    }
    if (ey > sy)
    {
        diffy = ey - sy; // count N
        count += diffy;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'N' && diffy != 0)
            {
                diffy -= 1;
                ni = i + 1;
            }
        }
    }

    else if (sy > ey)
    {
        diffy = sy - ey; // Count S
        count += diffy;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'S' && diffy != 0)
            {
                diffy -= 1;
                si = i + 1;
            }
        }
    }
    // cout << diffx << " " << diffy << "\n";
    // cout << si << " " << wi << " " << ei << " " << ni < "\n";
    if (diffx == 0 && diffy == 0)
    {
        cout << max(si, max(wi, max(ei, ni))) << "\n";
    }
    else
    {
        cout << "-1\n";
    }

    return 0;
}