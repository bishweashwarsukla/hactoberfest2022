#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s;
    cin>>s;
    int l=s.size();
    int count=1;
    bool flag=false;
    for(int i=0;i<l-1;i++){
        
        if(s[i]==s[i+1]){
            count++;
        }else{
            count=1;
        }
        if(count==7){
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