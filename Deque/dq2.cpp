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
    auto it=dq.begin();
    it++;
    dq.insert(it,500);//insert function funtion is used to insert an element before the specified element
    print(dq);
    dq.pop_back();
    dq.pop_front();
    print(dq);
    cout<<dq.size();// sixe returns the number of elements present in the deque
    return 0;
}