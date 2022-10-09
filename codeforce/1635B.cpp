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
        int n,count=0;
        cin>>n;
        int *arr = new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                count++;
                if(arr[i+2]>=arr[i] && i<n-2){
                    arr[i+1]=arr[i+2];
                }else{
                    arr[i+1]=arr[i];
                }
            }
        }
        cout<<count<<"\n";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}