#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
   int s, n;
   cin>>s>>n;
   pair<int,int> a[1000];
   bool flag= true;
   for(int i=0;i<n;i++){
       cin>>a[i].first>>a[i].second;
   }
   sort(a,a+n);
   for(int i=0;i<n;i++){
       if(s<=a[i].first){
           flag =false;
           break;
       }
       s+=a[i].second;
   }
   if(flag){
       cout<<"YES"<<"\n";
   }else{
       cout<<"NO"<<"\n";
   }
    return 0;
}