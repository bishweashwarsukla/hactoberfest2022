#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    for(int i=1;i<t;i++){
        if(i%2!=0){
            cout<<"I hate that ";
        }else{
            cout<<"I love that ";
        }
    }
    if(t%2==0){
        cout<<"I love it";
    }else{
        cout<<"I hate it";
    }
   
    return 0;
}