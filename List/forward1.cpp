#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> l={10,20,30,40};
    l.push_front(50);
    l.pop_front();
    l.pop_front();
    for(auto x:l)
    {
        cout<<x<<endl;
    }
    return 0;
}