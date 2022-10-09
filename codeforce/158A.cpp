#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t , k;
    cin>>t>>k;
    int a[t];
    for(int i=0;i<t;i++){
            cin>>a[i];
    }
    int count=0;
    for(int i=0;i<t;i++){
        if((a[i]>=a[k-1]) && a[i] > 0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}