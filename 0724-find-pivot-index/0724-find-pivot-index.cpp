class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum = 0 ;
        int rightsum = 0;
        int totalsum = accumulate(nums.begin(),nums.end(),0);
        for(int i = 0 ; i < nums.size(); i++){
            rightsum = 0;
            rightsum = accumulate(nums.begin()+i+1 , nums.end() ,rightsum);
            leftsum = totalsum - rightsum - nums[i];
            if(leftsum == rightsum){
                return i;
            }
        }
        return -1;
    }
};