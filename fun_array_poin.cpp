#include <iostream>
using namespace std;
void display(int b[4],int t)
{
 int i;
 
 cout<<"\n In Function\n";
 cout<<"\nAddress\tValue\n";
 for(i=0;i<t;i++)
  cout<<&b[i]<<"\t"<<b[i]<<endl;
}

int main()
{
int  a[]={11,22,33,44},n=4,i;
cout<<"\nAddress\tValue\n";
for(i=0;i<4;i++)
    cout<<&a[i]<<"\t"<<a[i]<<endl;

display(a,n);

return 0;
}