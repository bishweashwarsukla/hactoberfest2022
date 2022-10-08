#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while(start < end) {
        swap(arr[start++], arr[end--]);
    }
}

int findsum(int arr1[], int n1, int arr2[], int n2, int ans[]) {
    int i=n1-1, j=n2-1, carry=0, size=0;

    while(i>=0 && j>=0) {
        int sum = arr1[i] + arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans[size] = sum;
        size++;
        i--;
        j--;
    }

    while(i>=0) {
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans[size] = sum;
        size++;
        i--;
    }

    while(j>=0) {
        int sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans[size] = sum;
        size++;
        j--;
    }

    while (carry) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans[size] = sum;
        size++;
    }
    
    return size;
}

int main() {
    int arr1[100], arr2[100], ans[100], n1, n2, k;
    cout<<"\nEnter the size of first array: ";
    cin>>n1;

    cout<<"\nEnter the elements of first array: ";
    for(int i=0; i<n1; i++) {
        cin>>arr1[i];
    }

    cout<<"\nEnter the size of second array: ";
    cin>>n2;

    cout<<"\nEnter the elements of second array: ";
    for(int i=0; i<n2; i++) {
        cin>>arr2[i];
    }

    int size = findsum(arr1, n1, arr2, n2, ans);
    reverse(ans, size);

    cout<<"\nThe sum array is: ";
    for(int i=0; i<size; i++) {
        cout<<ans[i]<<" ";
    }

    return 0;
}