// Question Link: https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1

// Recursive Approach: [TC- O(2^N) and SC-O(N)]
int solve(int ind, int prev, int n, int a[])
{
    if(ind == n)
        return 0;
    
    // Not Take case
    int len = 0 + solve(ind+1, prev, n, a);
    
    // Take case
    if(prev == -1 || a[ind] > a[prev])
    {
        len = max(len, 1 + solve(ind+1, ind, n, a));
    }
    
    return len;
}

int longestSubsequence(int n, int a[])
{
    return solve(0, -1, n, a);
}


// Memoization Approach: [TC-O(N*N) and SC-(O(N*N)+O(N))]
int solve(int ind, int prev, int n, int a[], vector<vector<int>> &dp)
{
    if(ind == n)
        return 0;
    
    if(dp[ind][prev+1] != -1)
        return dp[ind][prev+1];
        
    // Not Take case
    int len = 0 + solve(ind+1, prev, n, a, dp);
    
    // Take case
    if(prev == -1 || a[ind] > a[prev])
    {
        len = max(len, 1 + solve(ind+1, ind, n, a, dp));
    }
    
    return dp[ind][prev+1] = len;
}

int longestSubsequence(int n, int a[])
{
    vector<vector<int>> dp(n, vector<int> (n+1, -1));
    return solve(0, -1, n, a, dp);
}


// Tabulation Approach: [TC-O(N*N) and SC-O(N*N)]
int longestSubsequence(int n, int a[])
{
    vector<vector<int>> dp(n+1, vector<int> (n+1, 0));
    
    for(int ind=n-1; ind>=0; ind--)
    {
        for(int prev=n-1; prev>=-1; prev--)
        {
            int len = 0 + dp[ind+1][prev+1];
    
            if(prev == -1 || a[ind] > a[prev])
            {
                len = max(len, 1 + dp[ind+1][ind+1]);
            }
            
            dp[ind][prev+1] = len;
        }
    }
    return dp[0][0];
}


// Space Optimization Approach: [TC-O(N*N) and SC-O(2*N)]
int longestSubsequence(int n, int a[])
{
    vector<int> next(n+1, 0), curr(n+1, 0);
    
    for(int ind=n-1; ind>=0; ind--)
    {
        for(int prev=n-1; prev>=-1; prev--)
        {
            int len = 0 + next[prev+1];
    
            if(prev == -1 || a[ind] > a[prev])
            {
                len = max(len, 1 + next[ind+1]);
            }
            
            curr[prev+1] = len;
        }
        next = curr;
    }
    return next[0];
}



// Different Type Tabulation Approach: [TC-O(N*N) and SC-O(N)]
int longestSubsequence(int n, int a[])
{
    vector<int> dp(n, 1);
    int maxi = 1;
    
    for(int ind=0; ind<n; ind++)
    {
        for(int prev=0; prev<ind; prev++)
        {
            if(a[prev] < a[ind])
                dp[ind] = max(1+dp[prev], dp[ind]);
        }
        maxi = max(maxi, dp[ind]);
    }
    return maxi;
}


// Printing Longest Increasing SUbsequence:
int longestSubsequence(int n, int a[])
{
    vector<int> dp(n, 1), hash(n, 0);
    int maxi = 1, lastInd = 0;
    
    for(int ind=0; ind<n; ind++)
    {
        hash[ind] = ind;
        for(int prev=0; prev<ind; prev++)
        {
            if(a[prev] < a[ind] && 1+dp[prev] > dp[ind])
            {
                dp[ind] = 1 + dp[prev];
                hash[ind] = prev;
            }
        }
        if(maxi < dp[ind])
        {
            maxi = dp[ind];
            lastInd = ind;
        }
    }
    
    vector<int> ans;
    ans.push_back(a[lastIndex]);
    
    while(hash[lastInd] != lastInd)
    {
        lastInd = hash[lastInd];
        ans.push_back(a[lastInd]);
    }
    reverse(ans.begin(), ans.end());
    
    for(auto it: ans)
        cout << it << " ";
    cout << endl;
    
    return maxi;
}
