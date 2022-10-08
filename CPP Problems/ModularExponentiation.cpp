// Program to calculate ('X' ^ 'N') % M

#include <bits/stdc++.h>
using namespace std;

int modExponentiation(int x, int n, int m) {
    int res = 1;

    while(n > 0) {
        if(n&1) {
            res = (1LL * res * (x%m))%m;            // Multiplying by 1LL to type cast integer into long
        }
        x = (1LL * (x%m) * (x%m))%m;            // Multiplying by 1LL to type cast integer into long

        n = n>>1;               // Using right shift operator do divide n by 2
    }

    return res;
}

int main() {
    int n, x, m;
    cout<<"Enter the three numbers : ";
    cin>>x>>n>>m;

    cout<<"Modular Exponentiation of "<<n<<" , "<<x<<" and "<<m<<" is ->  "<<modExponentiation(x, n, m);

    return 0;
}





/*
int res = 1;

while(n > 0) {
    if(n&1) {
        res = (1LL * res * (x%m))%m;            // Multiplying by 1LL to type cast integer into long
    }
    x = (1LL * (x%m) * (x%m))%m;            // Multiplying by 1LL to type cast integer into long

    n = n>>1;               // Using right shift operator do divide n by 2
}

return res;
*/