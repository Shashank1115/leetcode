class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()  < 2) return 0;
        sort(nums.begin(),nums.end());
        int store = 0 ;
        for(int i = 0 ; i< nums.size()-1 ; i++){
            int diff = nums[i+1] - nums[i];
            store = max(diff,store);
        }
        return store;
    }
};