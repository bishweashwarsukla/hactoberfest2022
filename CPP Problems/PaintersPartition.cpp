#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid) {
    int count = 1, distance = 0;

    for(int i=0; i<n; i++) {
        if(distance + arr[i] <= mid) {
            distance += arr[i];
        } else {
            count++;
            if(count > k ||  arr[i] > mid) {
                return false;
            }
            distance = arr[i];
        }
    }
    return true;
}

int FindMinimumDistance(int arr[], int n, int k) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }

    int start = 0, end = sum;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start < end) {
        if(isPossible(arr, n, k, mid)) {
            ans = mid;
            end = mid;
        } else {
            start = mid + 1;
        }

        mid = start + (end-start)/2;
    }

    return ans;
}

int main() {
    int arr[100], n, k;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<"Enter the number of painters: ";
    cin>>k;

    int ans = FindMinimumDistance(arr, n, k);

    cout<<"Required distance is: "<<ans;

    return 0;
}