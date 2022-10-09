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
        vector<int> v2;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v1.push_back(a);
        }
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            v2.push_back(b);
        }
        int temp;
        for(int i=0;i<v1.size();i++){
            if(v1[i]<v2[i]){
                temp = v1[i];
                v1[i]=v2[i];
                v2[i]=temp;
            }
        }
       int max1=INT_MIN;
       for(int i=0;i<v1.size();i++){
           if(v1[i]>max1){
               max1=v1[i];
           }
       }
       int max2=INT_MIN;
       for(int i=0;i<v2.size();i++){
           if(v2[i]>max2){
               max2=v2[i];
           }
       }
       cout<<max1*max2<<"\n";
    }
    return 0;
}