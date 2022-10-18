#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
/* here we have created a min heap and the order of priority is in increasing order meaning
that the top of this pq will be the smallest element inserted into the pq i.e 15*/

/* here to create a min heap we have to pass a vector of same data type as that of the pq
and a greater function of same data type as well*/
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