#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t, h;
    cin>>t>>h;
    int sum=0;
    while(t--)
    {
        int a;
        cin>>a;
        if(a<=h){
            sum=sum+1;
        }else{
            sum=sum+2;
        }
    }
    cout<<sum<<endl;
    return 0;
}