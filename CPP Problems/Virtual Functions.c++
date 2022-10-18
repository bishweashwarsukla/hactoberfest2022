#include <iostream>
using namespace std;
class base
{

public:
    int base_var;
    void setdata(int b)
    {
        base_var = b;
    }
    void print()
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
    
    base_class_ptr->print();

    
    return 0;
}