class Solution {
public:
    int countHillValley(vector<int>& nums) {
      int count = 0 ;
      for(int i  = 1 ; i < nums.size() ; i++){
        if(nums[i] == nums[i-1]) continue;
        int prev = i - 1;
        while(prev >= 0  && nums[i] == nums[prev]) prev--;
        int next = i + 1;
        while(next < nums.size() && nums[i] == nums[next]) next++;
        if(prev >= 0 && next < nums.size()){
 if(
    nums[i] > nums[prev] && nums[i] > nums[next] || 
    nums[i] < nums[prev] && nums[i] < nums[next]
    ) {
             count++;
        }
        }
      }
      return count;
    }
};