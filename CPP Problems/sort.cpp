#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout<<"\nEnter the size of array: ";
    cin>>n;

    cout<<"\nEnter the elements of array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<(n-2); i++) {
        for(int j=0; j<(n-1-i); j++) {
            if(arr[j] > arr[j+1]) {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout<<"\n\nThe sorted array is: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<"  ";
    }

    return 0;
}