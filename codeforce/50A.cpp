#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int m,n;
    cin>>m>>n;
    int count_row=m/2;
    int count_col=0;
    int sum=0;
    
    if(m%2!=0){
        count_col=n/2;
    }
    sum=count_row*n + count_col;
    cout<<sum<<endl;
    return 0;
}