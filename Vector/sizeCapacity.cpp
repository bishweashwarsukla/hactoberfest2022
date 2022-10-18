#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> v;
    cout<<v.capacity()<<" ";
    cout<<v.size();
    v.push_back(10);
    cout<< endl<<v.capacity()<<endl;
    cout<<v.size();
    v.push_back(20);
    cout<< endl<<v.capacity()<<endl;
    cout<<v.size();
    v.push_back(50);
    cout<< endl<<v.capacity()<<endl;
    cout<<v.size();
    v.push_back(40);
    cout<< endl<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<" "<<*it<<" ";
    }
    cout<< endl<<v.capacity()<<endl;
    cout<<v.size();
    return 0;
}

/*In this code we can see that the when the vector is full or cant contain more
elements a new vector of double size is created and the old elements are shifted 
to this new vector and th old space is freed up now in this new vector all old are 
pasted and the new element is added at the back.

here capacity is the number of elements it can hold and size is the number of elements held
ex- vector of 4 memeory addresses it contains 3 elemnts now
size=3
capacity=4
*/