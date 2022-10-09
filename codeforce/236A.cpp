#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    // string s;
    // cin>>s;
    // int l=s.size();
    // int m=l;
    // for(int i=0;i<l-1;i++){
    //     for(int j=i+1;j<l;j++){
    //         if(s[i]==s[j]){
    //             m=m-1;
    //         }
    //     }  
    // }
    // if(m%2==0){
    //     cout<<"CHAT WITH HER!";
    // }else{
    //     cout<<"IGNORE HIM!";
    // }

    string s;
    cin>>s;
    set<char> st;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }if(st.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}