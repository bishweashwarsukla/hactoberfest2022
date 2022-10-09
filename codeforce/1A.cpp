#include<bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
using namespace std;
signed main()
{
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int count_row=0 ;
    long long int count_col=0;
    if(m%a==0){
        count_row=m/a;
    }
    else{
        count_row=m/a+1;
    }
    if(n%a==0){ 
        count_col=n/a;
    }else{
        count_col=n/a+1;
    }
    cout<<count_row * count_col<<endl;
    return 0;
}