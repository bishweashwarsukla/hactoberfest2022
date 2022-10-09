#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s;
    cin>>s;
    int upper=0,lower=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            upper++;
        }else{
            lower++;
        }
    }
    if(upper>lower){
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<endl;
    }else{
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
    return 0;
}