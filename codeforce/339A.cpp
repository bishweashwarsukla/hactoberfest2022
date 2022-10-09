#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s;
    cin>>s;
    int l=s.length();
    sort(s.begin(),s.end());
    for(int i=0;i<l;i++){
        if(i<l-1){
            if(s[i]=='+'){
                continue;
            }else{
                cout<<s[i]<<'+';
            }
            
        }else{
            cout<<s[i]<<endl;
        }
        
    }
    return 0;
}