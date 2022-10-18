/*problem link - https://leetcode.com/problems/count-and-say/submissions/ */
// code -

 string countAndSay(int n) {
        string res="1";
        for(int i=2;i<=n;i++){
            string last=res;
            int len=res.size();
            res="";
            int j=0;
            while(j<len){
                int k=j;
                while(j<len && last[j]==last[k]){
                    k++;
                }
                res+=to_string(k-j)+last[j];
                j=k;
            }
        }
        return res;
    }
};
