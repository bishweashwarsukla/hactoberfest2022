#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    int x=0;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]=='+' || s[2]=='+' ){
            x++;
        }else{
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}