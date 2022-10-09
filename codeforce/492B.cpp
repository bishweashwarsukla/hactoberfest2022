// #include<bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     int n, m;
//     cin>>n>>m;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int a;
//         cin>>a;
//         v.push_back(a);
//     }
//     sort(v.begin(),v.end());
//     double diff1=0;
//     if(v[0]==0 && v[n-1]==15){
//         for(int i=0;i<n;i++){
//             if(diff1< v[i+1]-v[i]){
//                 diff1 = v[i+1]-v[i];
//             }
//         }
//         cout<<diff1/2 <<endl;

//     }else{
//         int firstDiff, lastDiff;
//     firstDiff =v[0];
//     lastDiff = m-v[n-1];
//     double diff2=0;
//      for(int i=0;i<n;i++){
//             if(diff2< v[i+1]-v[i]){
//                 diff2 = v[i+1]-v[i];
//             }
//         }
//         diff2 =diff2/2;
//     vector<int> v2;
// v2.push_back(firstDiff);
// v2.push_back(lastDiff);
// v2.push_back(diff2);
// double ans = *max_element(v2.begin(),v2.end());
// cout<<ans<<endl;
//     }
    

//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;
signed main()
{
    int n, m;
    cin>>n>>m;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
   int diff = 2 * max(arr[0],m-arr[n-1]);
    for(int i=1;i<n;i++){
        diff = max(diff, (arr[i]-arr[i-1]));
    }
    cout<<fixed<<setprecision(9)<<(double) diff/2<<"\n";
    return 0;
}