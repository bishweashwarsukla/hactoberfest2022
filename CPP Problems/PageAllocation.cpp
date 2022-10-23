#include<iostream>
#include<climits>
using namespace std;

bool isFeasible(int arr[],int n,int m,int mid){
    int student=1,sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]>mid){
            student++;
            sum=arr[i];
        }
        else{
            sum+=arr[i];
        }
    }
    return student<=m;
}

int maxof(int arr[],int n){
    int max=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int sumof(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int pageAllocation(int arr[],int n,int m){
    int mi=maxof(arr,n);
    int ma=sumof(arr,n);
    int result=INT_MAX;
    while(mi<=ma){
        int mid=(mi+ma)/2;
        if(isFeasible(arr,n,m,mid)){
            result=min(result,mid);
            ma=mid-1;
        }
        else{
            mi=mid+1;
        }
    }
    return result;
}
int main(){
    int arr[]={12,34,67,90};
    int n=4;
    int k=2;
    cout<<pageAllocation(arr,n,k)<<endl;
    return 0;
}