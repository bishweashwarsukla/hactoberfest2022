#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int a,ans=0;
    cin>>a;
    for(int i=1;i<=a;i++){
      if(a%i==0){
        ans++;
      }
    }
    if(ans==3){
      cout<<"YES"<<"\n";
    }else{
      cout<<"NO"<<"\n";
    }
  }
  
  

}