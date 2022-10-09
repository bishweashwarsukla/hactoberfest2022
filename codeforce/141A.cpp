#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
   string a, b, c ,ans;
   cin>>a>>b>>c;
   ans=a+b;
   sort(ans.begin(), ans.end());
   sort(c.begin(), c.end());
   if(ans == c){
       cout<<"YES"<<"\n";
   }else{
       cout<<"NO"<<"\n";
   }
    return 0;
}