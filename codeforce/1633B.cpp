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
        int zeros=0 , ones=0;
        for(int i=0 ;i<s.size();i++){
            if(s[i]=='0'){
                zeros++;
            }else{
                ones++;
            }
        }
        if(zeros==ones){
            cout<<zeros-1<<"\n";
        }else if(zeros>ones){
            cout<<ones<<"\n";
        
        }else{
            cout<<zeros<<"\n";
        }

    }
    return 0;
}