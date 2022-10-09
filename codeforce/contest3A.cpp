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
        int n ;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int largest=0 , second_largest=0;
        for(int i=0;i<n;i++){
            if(a[i]>a[largest]){
                largest=i;    
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]!=a[largest]){
                if(second_largest == -1){
                    second_largest = i;
                }else if(a[i]>a[second_largest]){
                    second_largest = i;
                }
            }
        }
        
    }
    return 0;
}