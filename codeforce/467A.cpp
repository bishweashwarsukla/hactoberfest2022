#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    int count=0;
    while(t--)
    {
    int p1, q1;
    cin>>p1>>q1;
    q1=q1-p1;
    if(q1>=2){
        count++;
    }
    }
    cout<<count<<endl;
    return 0;
}