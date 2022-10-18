// Static Data Members & Methods

// static variable-> all objects share that, that is not individual for objects
// & its default value is zero(0) -> when first object called and continues -> it is a class variable (class se jud jata hai)

// static variable->property of class not objects , all objects share that one by one

// static member functions-> they can only access the static data members

#include<iostream>
using namespace std;
class Employee 
{
    int id;
    static int count;
    // int count=0;
    // this count is individual for every object but to make this common count for evryone use static data member
    public:
    void setdata();
    void getdata();
    
    // static member function
    static void getcount()
    {
        cout<<"Your count is "<<count<<endl;
    }
};
int Employee::count=100; 
// this is need to be declared here outside the class & default value =0 & scope until program terminated and with the class, we can set the value/change the value of count here not in class
void Employee::setdata(){
    cout<<"enter id"<<endl;
    cin>>id;
    count++;
}
void Employee::getdata(){
    cout<<"your id and count is "<<id<<" " <<count<<endl;
}
int main(){
    Employee a;
    Employee b;
    Employee c;

    a.setdata();
    a.getdata();
    Employee::getcount();

    // here we call & access the static member function

    b.setdata();
    b.getdata();
     Employee::getcount();


    c.setdata();
    c.getdata();
     Employee::getcount();
    return 0;
}



