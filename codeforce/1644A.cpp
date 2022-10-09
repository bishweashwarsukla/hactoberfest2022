#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l= s.size();
        bool flag=false;
        int count=0;
        if(s[0]=='R'||s[0]=='G'||s[0]=='B'||s[l-1]=='r'||s[l-1]=='g'||s[l-1]=='b'){
            cout<<"NO"<<"\n";
        }else{
        for(int i=0;i<s.size();i++){
            if(islower(s[i])){
                for(int j=i+1;j<s.size();j++){
                    if(toupper(s[i])==s[j]){
                        flag =true;
                        count++;
                        break;
                    }else{
                        flag= false;
                    }
                }
            }
        }
        if(count==3){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        } 
    }    
    }
    
    return 0;
}