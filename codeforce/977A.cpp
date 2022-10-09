#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n, t;
    cin>>n>>t;
    while(t--)
    {
        if(n%10==0){
            n=n/10;
        }else{
            n=n-1;
        }
    }
    cout<<n<<endl;
    return 0;
}