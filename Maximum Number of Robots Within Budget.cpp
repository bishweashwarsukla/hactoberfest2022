You have n robots. You are given two 0-indexed integer arrays, chargeTimes and runningCosts, both of length n. The ith robot costs chargeTimes[i] units to charge and costs runningCosts[i] units to run. You are also given an integer budget.

The total cost of running k chosen robots is equal to max(chargeTimes) + k * sum(runningCosts), where max(chargeTimes) is the largest charge cost among the k robots and sum(runningCosts) is the sum of running costs among the k robots.

Return the maximum number of consecutive robots you can run such that the total cost does not exceed budget.

 

Example 1:

Input: chargeTimes = [3,6,1,3,4], runningCosts = [2,1,3,4,5], budget = 25
Output: 3
Explanation: 
It is possible to run all individual and consecutive pairs of robots within budget.
To obtain answer 3, consider the first 3 robots. The total cost will be max(3,6,1) + 3 * sum(2,1,3) = 6 + 3 * 6 = 24 which is less than 25.
It can be shown that it is not possible to run more than 3 consecutive robots within budget, so we return 3.
Example 2:

Input: chargeTimes = [11,12,19], runningCosts = [10,8,7], budget = 19
Output: 0
Explanation: No robot can be run that does not exceed the budget, so we return 0.
 

Constraints:

chargeTimes.length == runningCosts.length == n
1 <= n <= 5 * 104
1 <= chargeTimes[i], runningCosts[i] <= 105
1 <= budget <= 1015

 Answer:

class Solution {
public:
    typedef long long ll;
    int maximumRobots(vector<int>& ct, vector<int>& rc, long long budget) {
        multiset<int> ms;
        ll start=0,end=0,ans=0,n=ct.size(),s=0;
        while(end<n){
            s+=rc[end];
            ms.insert(ct[end++]);
            ll val = (*ms.rbegin())+(end-start)*s;
            while(val>budget){
                s-=rc[start];
                ms.erase(ms.find(ct[start++]));
                val =ms.empty()?0 : (*ms.rbegin())+(end-start)*s;
            }
            ans=max(ans,end-start);
        }
        return ans;
    }
};
 
