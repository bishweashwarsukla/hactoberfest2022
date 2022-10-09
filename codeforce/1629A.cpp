#include<bits/stdc++.h>
#define int long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v1.push_back(a);
        }
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            v2.push_back(b);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
    }
    int count=k;
    for(int i=0;i<v1.size();i++){
        if(v1[i]<=count){
           count+=v[i];
           if(count<=v[i+1]){
               continue;
           }else{
               count-=v[i];
               break;
           }
        }
    }
    for(int i=0;i<v2.size();i++){
        if(v2[i]<=)
    }
    return 0;
}