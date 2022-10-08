#include <bits/stdc++.h>
using namespace std;

void arrange(int arr[], int n) {
    int start=0, counter=0, end=n-1;

    while(counter <= end) {
        switch(arr[counter]) {
            case 0:
                swap(arr[counter++], arr[start++]);
                break;

            case 1:
                counter++;
                break;

            case 2:
                swap(arr[counter], arr[end--]);
                break;
        }
    }
}

int main() {
    int arr[100], n;
    cout<<"\nEnter the size of array: ";
    cin>>n;

    cout<<"\nEnter the elements of array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    arrange(arr, n);

    cout<<"\n\nThe sorted array is: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<"  ";
    }

    return 0;
}