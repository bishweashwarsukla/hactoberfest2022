#include <iostream>
using namespace std;

int fact(int num) {
    int ans=1;
    while(num>0) {
        ans *= num;
        num--;
    }
    return ans;
}

int main() {
    int n,r;
    cout<<"Enter the value of n & r: ";
    cin>>n>>r;

    int solution = 1;
    solution = (fact(n) / (fact(r) * fact(n-r)));

    cout<<"The expected value of nCr for n="<<n<<" and r="<<r<<" is "<<solution;
    return 0;
}