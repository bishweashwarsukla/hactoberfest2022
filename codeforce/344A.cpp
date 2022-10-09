#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    int count=0, i=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            continue;
        }else{
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}