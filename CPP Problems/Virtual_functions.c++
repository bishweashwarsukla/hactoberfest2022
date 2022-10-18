#include <iostream>
using namespace std;

// Polymorphism-> objects jo jo alg alg classes ko belong kr rahe hai vo ik tarah ke message ko belong krte hai


class base
{

public:
    int base_var;
    void setdata(int b)
    {
        base_var = b;
    }
    virtual void print()
    {
        cout << "1the value of base_var is " << base_var << endl;
    }
};
class derived:public base
{

public:
    int derived_var;
    void setdata(int d)
    {
        derived_var = d;
    }
    void print()
    {
        cout << "2the value of base_var is " << base_var << endl;
        cout << "2the value of derived_var is " << derived_var << endl;
    }
};
int main()
{
    base *base_class_ptr;
    base base_obj;
    derived dev_obj;

    base_class_ptr=&dev_obj;
    base_class_ptr->setdata(10);
    base_class_ptr->setdata(20);
    base_class_ptr->print();
    // this is by default behaviour base class function will run , to change it we will use virtual function so that derived class function will run (binding at run time)

    
    return 0;
}