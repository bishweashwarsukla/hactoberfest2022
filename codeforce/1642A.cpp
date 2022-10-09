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
        int arr[3][2];
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                cin>>arr[i][j];
            }
        }
       int ans=0;
        for(int i=0;i<2;i++){
            if((arr[0][1]==0 && arr[1][1]==0 ) || arr[1][1]==0 && arr[2][1]==0){
                cout<<"0.00"<<"\n";
                ans=1;
                break;
            }else if(arr[0][0]==0 && arr[1][0]){
                cout<<abs(arr[0][0]-arr[1][0])<<".000"<<"\n";
            }else if(arr[1][0]==0 && arr[2][0]==0){
                cout<<abs(arr[1][0]-arr[2][0])<<".000"<<"\n";
            }
            else{
                    if(arr[i][1]==arr[i+1][1]){
                    ans += abs(arr[i][0]-arr[i+1][0]);
                    cout<<ans<<".000000"<<endl;
                    }
            }
        }
        if(ans==0){
            cout<<"0.000"<<"\n";
        }
        
    }
    return 0;
}
