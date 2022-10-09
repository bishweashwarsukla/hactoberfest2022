#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;


int gcd(int a, int b){
    if(a==0)
     return b;
    if ( b==0)
     return a;
    if(a==b)
     return a;
    if(a>b)
     return gcd(a-b, b);
    return gcd(a, b-a);

}


signed main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a, b, c=1;
        a=x-3;
        b=x-(a+c);
        bool flag=true;
        while(flag){
        while(gcd(a,b)!=c){
            a=a-1;
            b=b+1;
            return gcd(a,b);
        }else{
            
        }
        }
        
        
    }
    return 0;
   

}