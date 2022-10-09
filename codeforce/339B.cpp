#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n, m;
    cin>>n>>m;
    int start=1, time=0;
    for(int i=0;i<m;i++){
        int pos;
        cin>>pos;
        if(pos>=start){
            time+= pos-start;
        }else{
            time+= n - (start-pos);
        }
        start=pos;
    }
    cout<<time;
    return 0;
}