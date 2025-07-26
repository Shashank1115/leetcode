class Solution {
public:
    int maxSum(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        unordered_set<int> seen;
        int sum = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] <= 0 ) continue;
            if (seen.find(nums[i]) != seen.end()) {
    continue;
} 
else{
    sum += nums[i];
    seen.insert(nums[i]);
}
            
        }
        if(nums.size() > 1 && seen.size() == 0){
            sort(nums.begin(),nums.end());
            return nums[nums.size()-1];
        }
        return sum;
    }
};