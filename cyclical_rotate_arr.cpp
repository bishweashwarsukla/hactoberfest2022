/*
Given an array, rotate the array by one position in clock-wise direction.
Example 1:
Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> v {1, 2, 3, 4, 5};
    int k=v.back();
    for(auto x: v)
        cout<<x<<" ";
    cout<<endl;
    v.pop_back();
    v.push_front(k);   
    for(auto x: v)
        cout<<x<<" ";
    return 0;
}