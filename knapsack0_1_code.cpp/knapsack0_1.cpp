#include<bits/stdc++.h>
using namespace std;

int knapsack(int *wt,int *val,int W,int n){

    if(n==0||W==0){
        return 0;
    }else
    if(wt[n-1] <= W){

        return max(val[n-1] + knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
    }else
    if(wt[n-1]>W){
        return knapsack(wt,val,W,n-1);
    }
}
int main(){

    int n,W;
    
    cout<<"Enter the total weight of Knapsack = ";
    cin>>W;
    cout<<endl;
    cout<<"Enter the total no. of objects = ";
    cin>>n;

    int wt[12],val[100];
    
    cout<<"Enter wt and val = \n\n";
    for(int i=0;i<n;i++){
        cout<<"Enter wt = ";
        cin>>wt[i];
        cout<<"Enter val = ";
        cin>>val[i];
    }
    int prof = knapsack(wt,val,W,n);
    cout<<prof<<endl ;
}
