class Solution {
public:
    void helper(vector<int>& nums , vector<vector<int>>& ans , vector<int>&res , vector<bool>& used){
        if( res.size() == nums.size()){
            ans.push_back(res);
            return;
        }
        for(int i  = 0 ; i < nums.size() ; i++){
            if(used[i]) continue;
            used[i] = true;
            res.push_back(nums[i]);
            helper(nums,ans,res,used);
            res.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        vector<bool> used(nums.size(),false);
        helper(nums,ans,res,used);
        return ans;
        
    }
};