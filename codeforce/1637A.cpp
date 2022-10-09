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
        vector<int> v1;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v1.push_back(a);
        }
        vector<int> v2;
        for(int i=0;i<n;i++){
            v2[i]=v1[i];
        }
        sort(v2.begin(),v2.end());
        bool flag=true;
        for(int i=0;i<n;i++){
            if(v1[i]!=v2[i]){
                flag=true;
                break;
            }
        }
        if(flag){
            if(v1.size()<=2){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}