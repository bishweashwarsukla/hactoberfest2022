#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
   int a, b;
   cin>>a>>b;
   cout<<min(a,b)<<" ";
   cout<<(max(a,b)-min(a,b))/2<<"\n";
    return 0;
}