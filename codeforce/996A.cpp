#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    int count=0;
        count=n/100;
        n=n%100;
        count=count+n/20;
        n=n%20;
        count=count+n/10;
        n=n%10;
        count=count+n/5;
        n=n%5;
        count=count+n/1;
   
    cout<<count<<"\n";
    return 0;
}