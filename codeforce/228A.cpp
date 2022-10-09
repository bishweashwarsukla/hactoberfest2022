#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    
    int a=4, count=0;
    vector<int> v;
    while(a--)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    set<int> s;
    for(int i=0;i<4;i++){
        s.insert(v[i]);
    }
    cout<<4-s.size()<<"\n";
    return 0;
    
}