int trap(vector<int>& height){
        int sum=0,rtemp=0,rsum=0;
        int tempsum=0,temp=height[0];
        for( int i=1;i<height.size();i++){
            if(temp>height[i])
            {
                tempsum+=temp-height[i];
            }
            else
            {
                temp=height[i];
                sum+=tempsum;
                tempsum=0;
            }
               /*-----reverse trapping------*/

            if(tempsum && i==height.size()-1){
                int j=i;    
                rtemp=height[j];
                while(height[j]<temp)
                {     
                    if(rtemp>height[j-1])
                    {
                        rsum+=rtemp-height[j-1];
                    }
                    else
                    {
                        rtemp=height[j-1];
                        sum+=rsum;
                        rsum=0;
                   }      
                    j--;
                }
            }
            
        }        
        return sum;
    
    }

int main() {
    int n; cin>>n;
    vector<int> height(n);
    for(auto & it : height)
        cin>>it;
    cout << trap(height);
}
