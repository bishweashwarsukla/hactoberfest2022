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
        int n,m;
        string s;
        cin>>n;
                cin>>m;
        cin>>s;

        if(m<1)
        {
            cout<<1<<endl;
            continue;
        }
        bool flag=true;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                flag=false;
            }
        }
        if(!flag){
 cout<<2<<endl;
        }else{
            cout<<"1"<<endl;
        }

    }
    return 0;
}