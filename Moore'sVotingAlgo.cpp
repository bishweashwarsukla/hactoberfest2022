// Cpp program to implement moore's voting algo to find the majority element.
// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       //Moore's voting algo
    
        //Phase 1 is to select a possbile candidate
        int cnt=1,res=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=res) cnt--;
            else cnt++;
            if(cnt==0)
            {
                res=nums[i];
                cnt=1;
            }   
        }
        cnt=0;
        //Phase 2 is to check the element is a majority element
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==res) cnt++;
            if(cnt>nums.size()/2) return res;
        }
        return -1;
        
    }
};