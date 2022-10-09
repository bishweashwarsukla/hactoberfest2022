#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,r,k,ans=0;
        cin>>n>>l>>r>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int j=0;
        while(k>=l && j<n && k>=a[j]){
            if(a[j]>=l && a[j]<=r){
            ans++;
            k=k-a[j];   
            }
            j++;
            
        }
        cout<<ans<<endl;

    }
    return 0;
}
