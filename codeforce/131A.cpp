#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s;
    cin>>s;
    bool flag=true;
    for(int i=1;i<s.size();i++){
       if(s[i]>=97)
        flag=false;
    }
    if(flag){
        for(int i=0;i<s.size();i++){
            if(s[i]>=97){
                s[i]=s[i]-32;
            }else{
                s[i]=s[i]+32;
            }
        }
        cout<<s<<"\n";
    }else{
        cout<<s<<"\n";
    }
    return 0;
}