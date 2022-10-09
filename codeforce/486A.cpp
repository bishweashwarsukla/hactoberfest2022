#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    int i=1, j=2;
    int count1=0, count2=0;
    while(i<=t){
        count1=count1+i;
        i=i+2;
    }
    while(j<=t){
        count2=count2+j;
        j=j+2;
    }
    cout<<count2-count1<<"\n";
    return 0;
}