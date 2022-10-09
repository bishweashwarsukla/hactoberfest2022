#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
   vector<int> v;
   for(int i=0;i<n;i++){
       int input;
       cin>>input;
       v.push_back(input);
   }
   int max = max_element(v.begin() , v.end())-v.begin();
//    int min = min_element(v.begin() ,v.end())-v.begin();

//    int min=0 , temp;
//    for(int i=0;i<v.size();i++){
//       for(int j=i+1;j<v.size();j++){
//            if(v[i]<=v[j]){
//                temp=i;
//                cout<<temp<<endl;
//            }
//            if(temp>=min){
//                min=temp;
//            }
//       }
//       }
//    cout<<min<<endl;
int minValue=v[0];
    int minIndex=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=minValue)
       { minValue=v[i];
        minIndex=i;
       }
    }
    if(minIndex<max){
        minIndex = v.size()-minIndex-2;
    }else{
        minIndex = v.size()-minIndex-1;
    }
    cout<<minIndex+max<<"\n";
    return 0;
}