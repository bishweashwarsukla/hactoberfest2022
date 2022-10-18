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
    list<int> l={10,20,30,40};
    //print(l);
    auto it=l.begin();
    it++;
    auto it2=l.insert(it,80);
    //print(l);
    /* This function is used to insert a value before the given index of the iterator 
    and returns the iterator to the currently entered value */
    l.insert(it2,2,99);
    print(l);
    list<int> l2={5,7,15};
    l.merge(l2);
    print(l);
    l.erase(it2,l.end());
    print(l);
    /* merges two sorted lists together and empties the second list.
    The erase function erases the value at the iterator and returns the 
    iterator just next to the deleted index  */


    return 0;
}