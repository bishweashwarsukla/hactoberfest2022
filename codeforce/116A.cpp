#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    int value=0 , final=0 ;
    while(t--)
    {
        int a ,b;
        cin>>a>>b;
        value=abs(value-a);
        value=value+b;
        final=max(value , final);
    }
    cout<<final<<endl;
    return 0;
}