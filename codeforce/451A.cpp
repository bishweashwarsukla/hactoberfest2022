#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n, m;
    cin>>n>>m;
    int Min = min(n,m);
    if(Min%2==0){
        cout<<"Malvika"<<"\n";
    }else{
        cout<<"Akshat"<<"\n";
    }
    return 0;
}
