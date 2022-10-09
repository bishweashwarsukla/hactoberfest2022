#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    int count=0;
  while(t>=5){
      count++;
      t=t-5;
  }while(t>=4){
      count++;
      t=t-4;
  }while(t>=3){
      count++;
      t=t-3;
  }while(t>=2){
      count++;
      t=t-2;
  }while(t>=1){
      count++;
      t=t-1;
  }
    cout<<count<<endl;
    return 0;
}