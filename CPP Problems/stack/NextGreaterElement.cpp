#include <bits/stdc++.h>
using namespace std;
 
void NextGreaterElement(int arr[], int n)
{
    
    stack<int> stk;

    stk.push(arr[0]);
 
    for (int i = 1; i < n; i++) {
 
        if (stk.empty()) {
            stk.push(arr[i]);
            continue;
        }
        while ( !stk.empty() && stk.top() < arr[i]) {
            cout << stk.top() << " --> " << arr[i] << endl;
            stk.pop();
        }
        stk.push(arr[i]);
    }
 
    while (stk.empty() == false) {
        cout << stk.top() << " --> " << -1 << endl;
        stk.pop();
    }
}

int main()
{   
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the array Elements : ";
    int arr[n];
    for(int i = 0 ; i  < n ; i++){
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    NextGreaterElement(arr, n);
    return 0;
}