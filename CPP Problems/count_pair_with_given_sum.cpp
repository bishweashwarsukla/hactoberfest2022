  class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
         int count=0;
         unordered_map<int,int> mp;
         for(int i=0;i<n;i++)
         {
             int diff = k -arr[i];
             if(mp.find(diff)!=mp.end())
             {
                 count += mp[diff];
             }
             mp[arr[i]]++;
         }
         
         return count;
    }
};
Footer
© 2022 GitHub
