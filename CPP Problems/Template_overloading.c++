// Member Function Templates & Overloading Template Functions in C++
#include<iostream>
using namespace std;
template<class T>
class any{
    public:
     T data;
    any(T a)
    {
        data=a;
    }
    void display();
};

// we can call functions here also
template<class T>
void any<T>::display()
{
    cout<<data;
}
void fun(int)
{
    cout<<"I am first fun()"<<endl;
}
template <class T>
void fun(T a)
{
    cout<<"I am template wala fun()"<<endl;
}
template<class T>
void fun1(T a)
{
    cout<<"hey"<<endl;
}
int main()
{
    any<int>obj(5);
    cout<<obj.data<<endl;
    obj.display();

    cout<<endl;

    fun(4);
    // it goes with exact one not with template one (if exact one is available)
    fun1('c');

 
    return 0;
}