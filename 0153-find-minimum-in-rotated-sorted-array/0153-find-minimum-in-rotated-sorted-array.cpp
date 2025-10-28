class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if( n == 1) return nums[0];
        if(n == 0) return -1;
        int high  = n-1;
        int low  =  0;
        while(low < high){
            int mid = low + (high - low) / 2;
            if(nums[mid] > nums[high]){
                low = mid  + 1;
            }

            else{
                high  = mid;
            }
        }
        return nums[low];
    }
};