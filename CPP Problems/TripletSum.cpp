#include <iostream>
using namespace std;

void findtriplet(int arr[], int size, int sum) {
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            for(int k=j+1; k<size; k++) {
                if(arr[i] + arr[j] + arr[k] == sum)
                    cout<<endl<<"\t"<<arr[i]<<"\t"<<arr[j]<<"\t"<<arr[k];
            }
        }
    }
}

int main() {
    int arr[100], n, s;
    cout<<"\nEnter the size of array: ";
    cin>>n;

    cout<<"\nEnter the elements of array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<"\nEnter the sum to check: ";
    cin>>s;

    findtriplet(arr, n, s);

    return 0;
}