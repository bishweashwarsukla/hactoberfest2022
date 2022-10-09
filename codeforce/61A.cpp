#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    
    string x, y;
    cin>>x>>y;
    for(int i=0;i<x.size();i++){
        if((x[i]=='0' && y[i]=='0') || (x[i]=='1' && y[i]=='1')){
            cout<<"0";
        }else{
            cout<<"1";
        }
    }
    return 0;  
}