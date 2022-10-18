#include<iostream>
using namespace std;
template <class T1=int,class T2=float,class T3=char>
class myclass
{
    T1 a;
    T2 b;
    T3 c;

    public:
    myclass(T1 a, T2 b, T3 c)
    {
        this->a=a; this->b=b; this->c=c;
    }
    void display()
    {
        cout<<"a-> "<<a<<" b-> "<<b<<" c-> "<<c<<endl;
    }
};

int main()
{
    // leave angulars as empty as default parameters are set just like in functions
    myclass<>obj(1,3.4,'j');
    obj.display();

    // if actual parameters are not passed only then it use default parameters
    myclass<float,char,char>obj1(2.2,'k','p');
    obj1.display();
    return 0;
}