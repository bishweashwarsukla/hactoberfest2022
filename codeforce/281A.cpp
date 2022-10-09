#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s;
    cin>>s;
    transform(s.begin(), s.begin()+1,s.begin() , ::toupper);
    cout<<s<<endl;
    return 0;
}