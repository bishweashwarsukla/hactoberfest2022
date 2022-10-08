#include <bits/stdc++.h>
#define inArr(a,n,sum) {for(int i = 0;i<n;i++){cin>>a[i];sum+=a[i];}}
#define outArr(a,n) {for(int i = 0;i<n;i++){cout<<a[i];}}
#define fd(k,n,step) {for(int i = k;i<n;i+=step){ }}
using namespace std;
 int main(){
  int sum=0,n=0;
  string multStr;
  cin>>multStr;//taking string as input
  vector<int>k;
   for (char const &c : multStr) {
        if (isdigit(c) == 1) k.push_back(c-'0');//only extracting 0-9 digits
    }
  for(auto it:k){
    sum+=it;//taking total sum of array
    n+=1;}
   int multiple[n];//actual array
   copy(k.begin(),k.end(),multiple);
  if(n==1&&multiple[0]==0){
    cout<<"\"NO COMBINATION EXISTS\"";//error case
  }
  else{
  sort(multiple,multiple+n,greater<>());
  vector<int>finAns0;
  vector<int>finAns1;
  vector<int>finAns2;
  vector<int>temp;
  vector<int>finAns;
  int check=0;
  for(int i=0;i<n;i++){
    if(multiple[i]%3){
      if(multiple[i]%3==1){
        finAns1.push_back(multiple[i]);
      }
      else{
        finAns2.push_back(multiple[i]);
      }
    }
    else{
      finAns0.push_back(multiple[i]);
    }
  }
  if(sum%3==1){
    if(finAns1.empty()==1){
      finAns2.pop_back();
      if(!finAns2.empty()){
      finAns2.pop_back();}
      else{cout<<"\"NO COMBINATION EXISTS\"";check=1;}//error if elements are finished but it needs to be poped
      if(n==2&&finAns2.empty()){
          cout<<"\"NO COMBINATION EXISTS\"";check=1;//error if elements are poped but no elements remain
        }
    }
    else{
      finAns1.pop_back();
    }
  }
  if(sum%3==2){
    if(finAns2.empty()==1){
      finAns1.pop_back();
      if(!finAns1.empty()){
      finAns1.pop_back();}
      else{
        cout<<"\"NO COMBINATION EXISTS\"";check=1;}//error if elements are finished but it needs to be poped
        if(n==2&&finAns1.empty()){
          cout<<"\"NO COMBINATION EXISTS\"";check=1;//error if elements are poped but no elements remain
        }
    }
    else{
      finAns2.pop_back();
    }
  }
    temp.reserve( finAns0.size() + finAns1.size() ); // preallocates the memory
    temp.insert( temp.end(), finAns0.begin(), finAns0.end() );
    temp.insert( temp.end(), finAns1.begin(), finAns1.end() );
    //for merging two vectors using insert
    finAns.reserve( finAns2.size() + temp.size() ); // preallocates the memory
    finAns.insert( finAns.end(), temp.begin(), temp.end() );
    finAns.insert( finAns.end(), finAns2.begin(), finAns2.end() );
    sort(finAns.begin(),finAns.end(),greater<int>());
  if(!check){
  cout<<"\"";
  for(auto it:finAns){
    cout<<it;
  }cout<<"\"";
  }}
  return 0;
}
