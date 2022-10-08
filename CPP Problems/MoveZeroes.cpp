#include <iostream>
using namespace std;

void move(int arr[], int n) {
    for(int z=0, i=0; z<n; z++) {
        if(arr[z] != 0) {
            swap(arr[z], arr[i]);
            i++;
        }
    }
}

int main() {
    int arr[100], n;

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    move(arr, n);

    cout<<"The arranged array is: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<"  ";
    }

    return 0;
}