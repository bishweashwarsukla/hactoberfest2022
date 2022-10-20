class Solution {
    public int thirdMax(int[] nums) {
        HashSet <Integer> has = new HashSet<>();
        int secondMax;
        int thirdMaxx =0;
        int count = 0;
        
        for (int a=0; a<nums.length; a++){     has.add(nums[a]);   }
        
          count = has.size();
        
         int firstMax = Collections.max(has);
         has.remove(firstMax);
          if(has.size()>0){
               secondMax = Collections.max(has);
              has.remove(secondMax);
                  
              if(has.size()>0) {  thirdMaxx = Collections.max(has);}
          } 
      
        
        
        if( count>=3 ) return thirdMaxx;
         return firstMax;
       
    
    }
}
