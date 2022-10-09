#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s ;
    cin>>s;
    vector<char> s1;
    int h=0,l=0,e=0,o=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='h' && h<1){
            s1.push_back(s[i]);
            h++;
        }else if(s[i]=='e' && e<1){
            s1.push_back(s[i]);
            e++;
        }else if(s[i]=='l' && l<2){
            s1.push_back(s[i]);
            l++;
        }else if(s[i]=='o' && o<1){
            s1.push_back(s[i]);
            o++;
        }
    }
    string p="hello";
    
    bool flag=true;
    for(int i=0;i<p.size();i++){
        if(p[i]!=s1[i]){
            flag=false;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}