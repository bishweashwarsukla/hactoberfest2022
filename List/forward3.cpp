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
    forward_list<int> l={10,20,30,50};
    print(l);
    auto it1= l.insert_after(l.begin(),55);
    print(l);
    /* Here the insert after function inserts the value to a index after the given iterator 
    and it returns a iterator to the currently inserted value in the list*/
    auto it2=l.erase_after(it1);
    print(l);
    /* Here the erase function is used to delete an item or many items in the list after the 
    given input iterator, this also returns the pointer to the next value after the deleted value*/
    auto it3=l.erase_after(it2,l.end());
    print(l);
    return 0;
}