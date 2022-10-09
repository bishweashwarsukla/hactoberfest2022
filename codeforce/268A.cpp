#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    vector<int> v1;
        vector<int> v2;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        v1.push_back(a);
        v2.push_back(b);
    }
    int count=0;
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
            if(i==j){
                continue;
            }else{
                if(v1[i]==v2[j]){
                    count++;
                }
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}