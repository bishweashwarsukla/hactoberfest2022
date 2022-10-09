#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;
    int count=0;
    for(int i=1;i<=d;i++){
        if(i%k==0 || i%l == 0 ||i%m == 0 ||i%n == 0)
            count++;  
    }
    cout<<count<<"\n";
    
    return 0;
}