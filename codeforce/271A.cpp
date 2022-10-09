#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    while(true){
        n=n+1;
        int a=n/1000;
        int b=n/100 %10;
        int c=n/10 %10;
        int d=n%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<n;
            return 0;
        }
    }
  return 0;
}