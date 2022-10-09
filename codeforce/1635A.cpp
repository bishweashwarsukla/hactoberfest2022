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
        int n, ans=0;
        cin>>n;
        int *input = new int[n];
        for(int i=0;i<n;i++){
            cin>>input[i];
        }
        for(int i=0;i<n;i++){
            ans= ans|input[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}