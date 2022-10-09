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
        int count1= floor(log10(n)+1);
        if(n%7==0){
            cout<<n<<"\n";
        }else{
            int ans=-1;
            for(int j=0;j<10;j++){
                if((n - n % 10 + j) % 7 == 0){
                ans = n - n % 10 + j;
            }
            }
            cout<<ans<<endl;
           
        }

    }
    return 0;
}