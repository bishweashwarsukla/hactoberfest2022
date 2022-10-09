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
        int n;
        cin>>n; 
        if(n%2==0){
            cout<<"0"<<endl;
        }
        if(n%2!=0){
            bool flag=false;
            int m=n;
            while(m!=0){
                if(m%2==0){
                    flag=true;
                    break;
                }
                m=m/10;
            }
            if(flag){
                while(n>=10){
                    n=n/10;
                }if(n%2==0){
                    cout<<"1"<<endl;
                }else{
                    cout<<"2"<<endl;
                }
            }else{
                cout<<"-1"<<endl;
            }
       }
   }
    return 0;
}