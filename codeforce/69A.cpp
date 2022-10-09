#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    int fx=0,fy=0,fz=0;
    int sum=0;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        fx=fx+x;
        fy=fy+y;
        fz=fz+z;
    }
    if((fx==0) && (fy==0) && (fz==0))
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    return 0;
}