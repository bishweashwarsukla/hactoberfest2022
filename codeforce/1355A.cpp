#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=2){
            cout<<"0"<<endl;
        }else if(n%2==0){
            cout<<n/2-1<<endl;
        }else{
            cout<<n/2<<endl;
        }

    }
    return 0;
}