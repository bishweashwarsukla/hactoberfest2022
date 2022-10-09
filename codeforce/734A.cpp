#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count_a=0 , count_b=0 , i=0;
    while(n--){
        if(s[i]=='A'){
            count_a++;
        }else{
            count_b++;
        }
        i++;
    }
    if(count_a>count_b){
        cout<<"Anton"<<endl;
    }else if(count_a==count_b){
        cout<<"Friendship"<<endl;
    }else{
        cout<<"Danik"<<endl;
    }
    return 0;
}