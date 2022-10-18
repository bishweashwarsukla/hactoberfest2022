#include<iostream>
using namespace std;
typedef struct Puneet
{
    int rollno;
    string name;
    float sal;

}pun;
// typedef used to change the name of data type.(like we mad in structure)
union money {
    int i;
    char car;
    float pounds;
};
int main()
{
    // Puneet p={35,"puneet",200000};
    pun p;
    money m;
    m.i=5;
    m.pounds=9.8;
    cout<<m.i<<endl;
    cout<<m.pounds<<endl;

    // union takes only 1 value at a time because of memory sharing


    // 2 ways to use structures
    p.rollno =35;
    p.name="puneet";
    p.sal=200000;
    cout<<p.rollno<<endl;
    cout<<p.name<<endl;
    cout<<p.sal<<endl;


    // enum allocates index to the items 
    enum meals{breakfast,lunch,dinner};
    meals m1=dinner;
    cout<<m1<<endl;
    cout<<lunch;

    return 0;
}