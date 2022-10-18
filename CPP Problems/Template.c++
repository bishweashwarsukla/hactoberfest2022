// Writing our First C++ Template in VS Code 
// just like functions
#include<iostream>
using namespace std;
template<class T>
class vector
{
    public:
    T *arr;
    int size;
    vector(T m)
    {
        size=m;
        arr=new T[size];
    }
    T dot_product(vector &v)
    {
        T d=0;
        for(int i=0;i<size;i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }

};
int main()
{
    vector <int>v1(3);
    v1.arr[0]=4;
    v1.arr[1]=3;
    v1.arr[2]=1;

    vector <int>v2(3);
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;

    cout<<v1.dot_product(v2)<<endl;

    vector <float>v3(3);
    v3.arr[0]=4.3;
    v3.arr[1]=3.5;
    v3.arr[2]=1.9;

    vector <float>v4(3);
    v4.arr[0]=8.1;
    v4.arr[1]=9.9;
    v4.arr[2]=4.5;

    cout<<v3.dot_product(v4);


return 0;
}