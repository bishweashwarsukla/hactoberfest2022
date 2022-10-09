#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    while(a<=b){
        a=a*3;
        b=b*2;
        count++;
    }
    cout<<count<<"\n";
    return 0;
}