#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    int res=1, count=1, m=t;
    vector<int> v;
    while(m--){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=1;i<t;i++){
        if(v[i]>=v[i-1]){
            count++;
            res=max(res, count);
        }else{
            count=1;
        }
    }
    cout<<res<<"\n";
    return 0;
}