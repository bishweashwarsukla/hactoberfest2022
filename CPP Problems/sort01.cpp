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

    int i=0, j=n-1;

    while(i <= j) {
        if(arr[i] == 0) {
            i++;
            continue;
        }

        if(arr[j] == 1) {
            j--;
            continue;
        }

        if(arr[i]==1 && arr[j]==0) {
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;j--;
        }
    }

    cout<<"\n\nThe sorted array is: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<"  ";
    }

    return 0;
}