#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int *temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[100], n;
    cout<<"\nEnter the size of array: ";
    cin>>n;

    cout<<"\nEnter the elements of array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n/2; i++) {
        swap(arr[i], arr[n-i-1]);
    }

    cout<<"\n\nThe reversed array is: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<"  ";
    }

    return 0;
}