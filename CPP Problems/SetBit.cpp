#include <iostream>
using namespace std;

int getsetbit(int num) {
    int tot=0;
    while(num) {
        if(num%2 == 1)
            tot++;
        num /= 2;
    }
    return tot;
}

int main() {
    int n;
    cout<<"Enter a number to check whether it is a power of 2 or not: ";
    cin>>n;

    int tot = getsetbit(n);

    if(tot == 1)
        cout<<"\nIt is a power of 2";
    else
        cout<<"\nIt is not a power of 2";
   
    return 0;
}