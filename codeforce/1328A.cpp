#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a%b==0){
            cout<<"0"<<"\n";
            
        }else{
             int i=1, temp=b;
        while(b<=a){
            b=temp*i;
            i++;
        }
        cout<<b-a<<endl;

        }
       
    }
    
    return 0;
}