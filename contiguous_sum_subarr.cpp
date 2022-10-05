/*
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.


Example 1:

Input:
N = 5
arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
Example 2:

Input:
N = 4
arr[] = {-1,-2,-3,-4}
Output:
-1
Explanation:
Max subarray sum is -1 
of element (-1)
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec {-2, -3, 4, -1, -2, 1, 5, -3};
    int max_so=0;
    int max_end=0;

    for(int i=0;i<vec.size();i++)
    {
        max_end=max_end+vec[i];
        // if(max_so==0)
        //     max_end=0;
        if(max_so<=max_end )
            max_so=max_end;
        else
            if(max_end<0)
                max_end=0;

        cout<<i<<" "<<max_end<<" "<<max_so<<endl;
    }
    cout<<endl;
    cout<<max_so;
    return 0;
}