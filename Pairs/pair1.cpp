#include<utility>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    pair<int,int> p1,p3;
    p3={20,50};
    p1={10,30};

    pair<int,string> p3(10,"hello");
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;

    cout<<(p1>p3);
    cout<<(p1<p3);
    cout<<(p1==p3);
    cout<<(p1!=p3);

    return 0;

}

/* By defualt the pairs are assigned with values 0 for integres this code shows two ways to initialise the values in the pairs.
The operators such as the == compare the first value first and if its equal then ok and if not then they check the second value.


*/
