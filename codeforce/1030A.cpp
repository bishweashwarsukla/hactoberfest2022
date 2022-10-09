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
        int n;
        cin>>n;
        count=count+n;
    }
    if(count>=1){
        cout<<"HARD\n";
    }else{
        cout<<"EASY\n";
    }
    return 0;
}