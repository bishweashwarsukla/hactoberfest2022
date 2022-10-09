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
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char> s1;
        if(s.size()<2){
            cout<<"YES"<<"\n";
        }else if(s.size()==2){
            if(s=="00" && s=="11"){
                cout<<"NO"<<"\n";
            }else{
                cout<<"YES"<<"\n";
            }
        }else{
            cout<<"NO"<<"\n";
        }


    }
    return 0;
}