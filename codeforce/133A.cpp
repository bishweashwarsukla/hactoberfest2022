#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
        flag=true;
        break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}