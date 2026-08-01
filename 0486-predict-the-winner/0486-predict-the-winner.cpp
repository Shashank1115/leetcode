class Solution {
public:
 vector<vector<int>> dp ;
int helper(vector<int>&nums , int i , int j){
    if(i == j){
        return nums[i];
    }
    if(dp[i][j] != INT_MIN){
        return dp[i][j];
    }
   int startval = nums[i] - helper(nums,i+1,j);
   int endval = nums[j] - helper(nums,i,j-1);
    return dp[i][j] = max(startval,endval);
}
    bool predictTheWinner(vector<int>& nums) {
        dp.assign(nums.size(), vector<int>(nums.size(), INT_MIN));
        if(helper(nums,0,nums.size()-1) >= 0){
            return true;
        }
        else return false;
        // deque<int> dq(nums.begin(),nums.end());
        // int p1 = 0;
        // int p2 = 0 ;
        // int store1 = 0 ; 
        // int store2 = 0;
        // while(!dq.empty()){
        //     p1 = max(dq.front(),dq.back());
        //     if(p1 == dq.front()){
        //         dq.pop_front();
        //     }
        //     else dq.pop_back();
        //     store1 += p1;
        //     p2 = max(dq.front(),dq.back());
        //     if(p2 == dq.front()){
        //         dq.pop_front();
        //    }
        //    else dq.pop_back();
        //    store2 += p2;

        // }
        // return ( store1 >= store2 ) ? true : false;
    }
};