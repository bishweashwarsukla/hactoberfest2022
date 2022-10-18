#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int arr[]={10,15,800};
    //how to create a pq from a given array
    priority_queue<int> pq{arr,arr+3};
    pq.push(15);
    pq.push(45);
    pq.push(75);
    cout<<pq.size()<<endl;
    while(pq.empty()==false){
     cout<<pq.top()<<" ";
     pq.pop();
    }
    
    return 0;
   
}