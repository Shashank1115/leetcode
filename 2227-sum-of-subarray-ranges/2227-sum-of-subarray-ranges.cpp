class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            int minn = nums[i];
            for(int j = i; j < n; j++) {
                minn = min(minn, nums[j]);
                sum = (sum + minn) ;
            }
        }
        long long sum2 = 0;
        int m = nums.size();
        for(int i = 0; i < n; i++) {
            int maxx = nums[i];
            for(int j = i; j < n; j++) {
                maxx = max(maxx, nums[j]);
                sum2 = (sum2 + maxx);
            }
        } 
        return sum2 - sum;
    }
};