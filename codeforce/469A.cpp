#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    vector<int> v1;
    for(int i=0;i<p;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    int q;
    cin>>q;
    vector<int> v2;
    for(int i=0;i<q;i++){
        int b;
        cin>>b;
        v2.push_back(b);
    }
    bool flag1=false, flag2=false;
    for(int i=0;i<p;i++){
        if(v1[i]==n){
            flag1=true;
        }
    }
    for(int i=0;i<q;i++){
        if(v2[i]==n){
            flag2=true;
        }
    }
    if( flag1==true || flag2==true){
        cout<<"I become the guy."<<"\n";
    }
    else{
    cout<<"Oh, my keyboard!"<<"\n";
    }
    return 0;
}