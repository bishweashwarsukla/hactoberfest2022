#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int k, n, w;
    cin>>k>>n>>w;
    int sum=0;
    while(w--)
    {
    sum=sum+(k*(w+1));
    }
    int final=sum-n;
    if(final<0){
        cout<<"0"<<endl;
    }
    else{
        cout<<final<<endl;
    }
    return 0;   
}