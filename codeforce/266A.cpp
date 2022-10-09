#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    int l=s.size();
    int count=0;
    for(int i=0;i<l-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
  