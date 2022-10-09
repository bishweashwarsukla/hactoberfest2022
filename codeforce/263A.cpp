#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    // int t;
    // cin>>t;
    int a[5][5];
    int count=0, c, b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                c=i;
                b = j;
            }
        }
    }
    // cout<<c<<" "<<b;
    count = abs(2-c)+abs(2-b);
    cout<<count<<endl;
    return 0;
}