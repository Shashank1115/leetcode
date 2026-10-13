class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i  = 0 ; i < nums.size() ; i++){
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(),nums.end());

        long long ans = 0;
        for(int i  = 0 ; i < nums.size() ; i++){
            long long idx = 1LL * nums[i] * nums[i];
            if(i < nums.size()/2){
                ans -= idx;
            }
            else{
                ans += idx;            

            }
        }
        return ans;

    }
};