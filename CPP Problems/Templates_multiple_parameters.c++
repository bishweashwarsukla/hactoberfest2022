// C++ Templates: Templates with Multiple Parameters
#include<iostream>
using namespace std;
/* 
SYNTAX->
    template<class T1,class T2.....(commma separated)>
    class name_of_class{};

*/

// Class template with multiple parameters(one,two and many more)

template <class T1,class T2>
class A{
    T1 num;
    T2 ch;
    public:
    A(T1 a,T2 b) {
        num=a;
        ch=b;
    }
    void display()
    {
        cout<<"value of num "<<num<<endl;
        cout<<"value of char "<<ch<<endl;    
    }
};
int main()
{
    A<float,char> obj(4.5,'c');

    obj.display();

    return 0;
}