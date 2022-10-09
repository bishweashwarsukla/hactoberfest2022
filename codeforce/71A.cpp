#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    int size=s.size();
    if(size>10)
    cout<<s[0]<<size-2<<s[size-1]<<endl;
    else
    cout<<s<<endl;
    }
    return 0;
}