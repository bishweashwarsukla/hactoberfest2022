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
        int x1,p1;
        cin>>x1>>p1;
        int x2,p2;
        cin>>x2>>p2;
        x1=x1*pow(10,p1);
        x2=x2*pow(10,p2);
        if(x1>x2){
            cout<<">\n";
        }else if(x1==x2){
            cout<<"=\n";
        }else{
            cout<<"<\n";
        }
    }
    
    return 0;
}