// Single Inheritance Deep Dive
#include<iostream>
using namespace std;
class base 
{
    int data1;      // private data member by default and cannot be inherited
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
    base(){}
};
class derived : private base  // derived privately
{
    int data3;
    public:
    void process();
    void display();

};
void base :: setdata()
{
    data1=10;
    data2=20;
}
int base :: getdata1()
{
    return data1;
}
int base:: getdata2()
{
    return data2;
}
void derived::process()
{
    // we can call here only
    setdata();
    data3=data2*getdata1();
}
void derived::display()
{
    cout<<"The value of data1 = "<<getdata1()<<endl;
    cout<<"The value of data2 = "<<data2<<endl;
    cout<<"The value of data3 = "<<data3<<endl;
}
int main()
{
    derived der;
    
    der.process();
    der.display();

    return 0;
}