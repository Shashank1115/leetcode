class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxvalue = *max_element(nums.begin(), nums.end());
             int longest = 0 ;
            int length = 0 ;
            for(int num : nums){
                if(num == maxvalue){
                length++;
                longest = max(length,longest);
                }
            
            else{
                length = 0;
                    }
            }
            return longest;
    }
};
