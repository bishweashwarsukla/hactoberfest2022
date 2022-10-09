#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Max = arr[0];
    int Min = arr[0];
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i]>Max){
            Max= arr[i];
            count++;
        }else if( arr[i]<Min){
            Min = arr[i];
            count++;
        }else{
            continue;
        }
    }
    cout<<count<<"\n";

    return 0;
}