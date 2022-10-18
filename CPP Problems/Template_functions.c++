// C++ Function Templates & Function Templates with Parameters
#include<iostream>
using namespace std;
template <class T1,class T2>
float aveg(T1 a,T2 b)
{
    float avg=(a+b)/2.0;
    return avg;
}

// different data types functions can be implemented with templates.

template <class T>
void swapping(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
int main()
{
    cout<<aveg(5.1,2.1)<<endl;

    int x=5,y=7;
    swapping(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}