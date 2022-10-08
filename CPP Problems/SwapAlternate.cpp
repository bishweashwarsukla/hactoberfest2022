#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int *temp;
    temp = a;
    a = b;
    b = a;
    return;
}

int main() {
    int arr[100], n;
    cout<<"\nEnter the size of array: ";
    cin>>n;

    cout<<"\nEnter the elements of array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i+=2)
        swap(arr[i], arr[i+1]);
    
    cout<<"\n\nThe swaped array is: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<"  ";
    }

    return 0;
}