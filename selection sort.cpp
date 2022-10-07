#include<iostream>
using namespace std;
void swapping(int &a ,int &b){
  int temp;
  temp =a;
  a=b;
  b= temp;
}
void display(int *array , int size){
  for(int i =0;i<size;i++)
      cout<<array[i]<<" ";
  cout<<endl;
}
void selectionSort(int *array, int size){
  int i ,j , min;
  for(i=0;i<size-1;i++){
    min = i;
    for(j=i+1;j<size;j++)
        if(array[j]<array[min]);
          min = j;

      swap(array[i],array[min]);
  }
}
int main()
{    
        int n;
        cout<<"enter the number of elements : ";
        cin>>n;
        int arr[n];
        cout<<"enter elements : "<<endl;
        for(int i =0;i<n;i++){
          cin>>arr[i];
        }
        cout<<"Array before sorting :";
        display(arr,n);
        selectionSort(arr,n);
        cout<<"array after sorting : ";
        display(arr,n);

        return 0;
}
