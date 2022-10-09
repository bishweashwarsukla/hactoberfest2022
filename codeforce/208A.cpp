#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{

    string s;
    cin>>s;
    bool flag=true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            if(!flag){
                cout<<" ";
            }
        }else{
            flag=false;
            cout<<s[i];
        }
    }

    return 0;
}
