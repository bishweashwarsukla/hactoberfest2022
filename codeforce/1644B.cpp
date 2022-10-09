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
        if(n==3){
            cout<<"3 2 1"<<"\n";
            cout<<"1 3 2"<<"\n";
            cout<<"3 1 2"<<"\n";
        }else{
            vector<int> v;
            for(int i=1;i<=n;i++){
                v.push_back(i);
            }
            reverse(v.begin(),v.end());
            for(int i=0;i<n;i++){
                for(int j=n-i;j<n;j++){
                    cout<<v[j]<<" ";
                }for(int k=0;k<n-i;k++){
                    cout<<v[k]<<" ";
                }
                cout<<"\n";cout<<"\n";
            }
            
        }

    }
    return 0;
}