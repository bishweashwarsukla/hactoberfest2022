#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    int count=0;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]=='T'){
            count+=4;
        }else if(s[0]=='C'){
            count+=6;
        }else if(s[0]=='O'){
            count+=8;
        }else if(s[0]=='D'){
            count+=12;
        }else{
            count+=20;
        }

    }
    cout<<count<<endl;
    return 0;
}