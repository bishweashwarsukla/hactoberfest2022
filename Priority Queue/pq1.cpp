#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq;
    /* by default the priority queue is implemented as a max heap meaning for integer type 
    it will always store the data in descending order meaning the root node or the top element 
    will always be the greatest element*/
    pq.push(15);
    pq.push(45);
    pq.push(75);
    cout<<pq.size();
    /* the push function inserts the value at the end or the leaf of the pq and then that value 
    is compared with the exisiting nodes and the node is moved up accordingly  */
    while(pq.empty()==false){
     cout<<pq.top()<<" ";
     pq.pop();
    }
    
    return 0;
   
}