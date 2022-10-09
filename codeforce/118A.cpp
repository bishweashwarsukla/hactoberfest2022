#include<bits/stdc++.h>
#include<algorithm>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    string s1;
    cin>>s1;
    int s=s1.size();
    // char a,o,y,e,u,i;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    // while(s--)
    // {
        
    for(int i=0;i<s;i++){
        if(s1[i]=='a' || s1[i]=='o' || s1[i]=='y' || s1[i]=='e' || s1[i]=='u' || s1[i]=='i' ){
            continue;
        }
        else{
            cout<<'.'<<s1[i];
        }
        
    }

    // }
    return 0;
}