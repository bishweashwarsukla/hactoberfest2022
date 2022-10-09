#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s1 , s2;
    cin>>s1>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    transform(s2.begin(),s2.end(),s2.begin(),::toupper);
    int equalornot=s1.compare(s2);
    if(equalornot==0){
        cout<<"0"<<endl;
    }else if(equalornot>0){
        cout<<"1"<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    return 0;
}