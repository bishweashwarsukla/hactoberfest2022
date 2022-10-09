#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    vector<int> v;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int ans=1;
    for(int i=0;i<v.size();i++){
        if(v[0]%2==0 && v[1]%2==0){
            if(v[i]%2!=0){
                ans+=i;
                break;
            }else{
                continue;
            }
        }else if(v[0]%2!=0 && v[1]%2!=0){
            if(v[i]%2==0){
                ans+=i;
                break;
            }else{
                continue;
            }
        }else{
           if((v[0]%2==0 && v[2]%2==0) || (v[0]%2!=0 && v[2]%2!=0)){
            ans=2;
            break;
           }else{
               ans=1;
           }  
        }
    }
    cout<<ans<<"\n";
   

    return 0;
}