#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> s1;
    for(int i=0;i<s.size();i++){
        s1.insert(s[i]);
    }
    if(s1.size()>=26){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    return 0;
}