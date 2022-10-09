#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n,m;
    cin>>n>>m;
    int last=m;
    vector<int> v;
        for(int i=0;i<last;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        // cout<<"Sorted Vector is :";
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<"\n";
        int minDiff = v[n-1]-v[0];
        // cout<<"minDiff is"<<minDiff<<"\n";
        
        for(int i=0;i<v.size()-n;i++){
            if((v[n+i]-v[i+1])<minDiff){
                minDiff=v[n+i]-v[i+1];
            }
        }
    cout<<minDiff<<"\n";
    return 0;
}