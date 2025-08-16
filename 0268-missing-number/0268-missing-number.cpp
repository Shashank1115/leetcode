class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int j =  nums.size();
      int missing = 0 ;
      int s=0 , 
      sn = 0 ;
      sn = (j * (j+1))/2;
    for(int i = 0 ; i < j ; i++){
       s = s +  nums[i];
    }
         
  return missing  = sn - s ;
    }
};