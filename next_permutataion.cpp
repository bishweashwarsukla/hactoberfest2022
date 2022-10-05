/*Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]
Example 3:

Input: nums = [1,1,5]
Output: [1,5,1]
Example 4:

Input: nums = [1]
Output: [1]
*/


class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
          next_permutation(nums.begin(),nums.end());
          cout<<"[";
          for(int i=0;i<nums.size();i++)
          {
              cout<<nums[i];
              if(i<nums.size()-1)
              {
                  cout<<",";
              }
          }
          cout<<"]";
    }
};


/* for previous permutation

prev_permutation(vec.begin(),vec.end());

*/
