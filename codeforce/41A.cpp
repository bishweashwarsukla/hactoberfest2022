#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    
    string x,y;
    cin>>x>>y;
    reverse(x.begin(),x.end());
    bool flag=true;
    for(int i=0;i<x.size();i++){
        if(x[i]!=y[i]){
            flag=false;
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