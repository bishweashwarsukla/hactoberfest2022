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
        vector<char> v1;
        vector<char> v2;
        if(s.size()%2!=0){
         cout<<"NO\n";
        }else{
            for(int i=0;i<s.size()/2;i++){
                v1.push_back(s[i]);
            }for(int i=s.size()/2;i<s.size();i++){
                v2.push_back(s[i]);
            }
            bool flag=true;
            for(int i=0;i<v1.size();i++){
               if(v1[i]==v2[i]){
                continue;
               }else{
                flag=false;
                break;
                }
            }
            if(flag){
            cout<<"YES\n";
            }else{
            cout<<"NO\n";
            } 
        }
        
    }
    return 0;
}