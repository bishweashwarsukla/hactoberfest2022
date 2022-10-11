#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,s=0,t=0,u=0;
    cin>>n;
    int x[n]={0},y[n]={0},z[n]={0};
    for (int i = 0; i < n; i++) {
        int b;
        cin>>b;
        if(b==1){x[s]=i+1;s++;}
        else if(b==2){y[t]=i+1;t++;}
        else{z[u]=i+1;u++;}
    }
    
    int p = min(s,min(t,u));
    cout<<p<<endl;
    
    for (int i = 0; i < p; i++) {
        cout<<x[i]<<" "<<y[i]<<" "<<z[i]<<endl;
    }
    
    
    
    return 0;
}
