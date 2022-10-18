#include<iostream>
#include<forward_list>
using namespace std;

void print(forward_list<int> l)
{
    for(auto x:l)
    {
        cout<<x<<" ";
        
    }
    cout<<endl;
}

int main()
{
    forward_list<int> l;
    l.assign(5,50); 
    print(l);
    l.remove(10);
    print(l);

    return 0;
}