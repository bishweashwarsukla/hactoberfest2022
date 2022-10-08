#include <bits/stdc++.h>
using namespace std;

const string DIGITS[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

void sayDigits(int n) {
    if(n==0)
        return;
    sayDigits(n/10);
    int d = n % 10;
    cout<<DIGITS[d]<<" ";
}

int main() {
    int n;
    cin>>n;

    sayDigits(n);
    return 0;
}