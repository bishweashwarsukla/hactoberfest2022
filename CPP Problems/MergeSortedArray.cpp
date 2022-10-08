#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int n1, int arr2[], int n2, int arr3[]) {
    for(int i=0, j=0, k=0; i<n1 || j<n2; k++) {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
            continue;
        }
        if(arr1[i] > arr2[j]) {
            arr3[k] = arr2[j];
            j++;
            continue;
        }
        if(arr1[i] == arr2[j]) {
            arr3[k] = arr1[i];
            k++;
            arr3[k] = arr2[j];
            i++;
            j++;
            continue;
        }
    }
}

int main() {
    int arr1[100], arr2[100], n1, n2, arr3[100]={0};

    cout<<"Enter the size of first array: ";
    cin>>n1;

    cout<<"Enter the elements of the first array: ";
    for(int i=0; i<n1; i++) {
        cin>>arr1[i];
    }

    cout<<"Enter the size of second array: ";
    cin>>n2;

    cout<<"Enter the elements of the second array: ";
    for(int i=0; i<n2; i++) {
        cin>>arr2[i];
    }

    merge(arr1, n1, arr2, n2, arr3);

    cout<<"The merged array is: ";
    for(int i=0; i<n1+n2; i++) {
        cout<<arr3[i]<<"  ";
    }

    return 0;
}