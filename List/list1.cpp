#include<iostream>
#include<list>
using namespace std;

void print(list<int> l)
{
    for(auto x:l)
    {
        cout<<x<<" ";
        
    }
    cout<<endl;
}

int main()
{
    list<int> l;
    l.push_front(10);
    l.push_front(80);
    l.push_front(70);
    l.push_front(50);
    print(l);
    l.pop_front();
    l.pop_back();
    print(l);
    l.push_back(400);
    print(l);


    return 0;
}