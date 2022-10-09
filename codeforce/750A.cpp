#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n, k;
    cin>>n>>k;
    int ans=0;
    int i=1;
    bool flag=true;
    while(flag)
{
    k+=5*i;
    if(k>240){
        flag=false;
        break;
    }
    i++;
    ans++;
}   
if(ans>n){
    cout<<n<<"\n";
}else{
    cout<<ans<<"\n";
}
    return 0;
}