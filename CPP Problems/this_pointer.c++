// This pointer 
// this is a keyword which is a pointer which points to the object which invokes the member function & if we want to return object also then only we can use this pointer. 
// when we want to keep same names
#include<iostream>
using namespace std;
class A{
    int a;
    public:
    // void setdata(int a)
    // {
    //     this->a=a;
    // }

// if we want to return object
    A & setdata(int a) 
    {
        this->a=a;
        return *this;
    }
    void getdata()
    {
        cout<<"The value of a is "<<a<<endl;
    }
};
int main()
{
    A a;

    // as a.setdata()returns the object we can directly access getdata()
    a.setdata(4).getdata();
    // a.getdata();

    return 0;
}
