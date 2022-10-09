#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    //input : {a , b , c}
    //Output : 3
    string s;
    getline(cin,s);
    // cout<<s<<endl;
    set<char> s1;
    if(s.size()==2){
        cout<<"0"<<"\n";
        return 0;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='{' || s[i]==',' ||s[i]=='}'||s[i]==32){
            continue;
        }else{
            s1.insert(s[i]);
        }
    }
    cout<<s1.size()<<"\n";
    return 0;
}