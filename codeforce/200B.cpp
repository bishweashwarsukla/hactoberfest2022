#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t; 
    cin>>t;
    long double sum=0.0;
    int m=t;
    while(m--)
    {
        int a;
        cin>>a;
        sum=sum+a;
    }
    long double avg=sum/t;
    cout<<fixed<<setprecision(12)<<avg<<endl;
    return 0;
}