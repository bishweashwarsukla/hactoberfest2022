#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n>>x;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int l,r,f=0;
        for(int i=0;i<n;i++){
            int len=0;
            r=l=i;
            if(a[i]%x==0){
                while(l>=0){
                    if(a[l]<=a[i])len++;
                    else break;
                    l--;
                }
                while(r<n){
                    if(a[r]<=a[i])len++;
                    else break;
                    r++;
                }
                if(len>=a[i]/x){
                    f=1;
                    break;
                }
            }
        }
        if(f)cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}
