/*
Given an array of positive and negative numbers, find if there is a subarray (of size at least one) with 0 sum.

Input: {4,2,-3,1,6}
Output: True
2,-3,1 These three elements sum up to zero

Input: {4,2,0,1,6}
Output: True
The third element is zero, A single element is zero so the array contains a subarray with zero sum is true
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool subarrayZeroSum(vector<int> &nums){
    int sum = 0;
    unordered_map<int, int> m;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
        if(m.find(sum)!=m.end()) return true;
        else m[sum]++;
    }
    return false;
}

int main(){
    vector<int> nums = {4,2,-3,2,6};
    (subarrayZeroSum(nums))?cout << "Array contains a subarray with zero sum":cout << "Array does not contain any subarray with zero sum";
    return 0;
}