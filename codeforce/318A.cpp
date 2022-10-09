#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n, k;
    cin>>n>>k;
    vector<int> v;
    int i=1 , j=2;
    while(i<=n){
        v.push_back(i);
        i=i+2;
    }
    while(j<=n){
        v.push_back(j);
        j=j+2;
    }
    cout<<v[k-1]<<endl;
    return 0;
}