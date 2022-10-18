#include<iostream>
#include<deque>
using namespace std;

void print(deque<int> dq)
{
        for(auto x:dq)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    
}
int main()
{
    deque<int> dq={10,20,3,78};
    print(dq);
    dq.push_front(100);
    dq.push_back(45);
    print(dq);
return 0;
}