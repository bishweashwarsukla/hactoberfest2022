#include<iostream>
#include<vector>
using namespace std;

void fun(vector<int> &v)
{
    v.push_back(10);
    v.push_back(20);
}

int main()
{
    vector<int> v{5,4,6};
    fun(v);
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<v.capacity()<<endl;
      cout<<v.size();
    return 0;
}

/*Here in this funtion we pass the vector as a refrence using the & symbol because we need to modify it if we dont use
the & then a new copy of the vectoe will be created locally and the chnages will be applied to that vector only.

it is the iterator for the particular vector v of same data type as vector v the function of the
iterator is to store the memory addresses of the elements of the vector and the value present at
these memory addresses can be accessed by using the derefrencing operator *
*/