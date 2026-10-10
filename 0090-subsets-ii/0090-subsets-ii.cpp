class Solution {
public:
    void helper(vector<int>&nums , vector<vector<int>> &ans , int idx , vector<int> res){
        ans.push_back(res);
        for(int i = idx ; i < nums.size() ; i++){
            if( i != idx && nums[i] == nums[i-1]) continue;
            res.push_back(nums[i]);
            helper(nums,ans,i+1,res);
            res.pop_back();
        }
        // if(idx == nums.size()){
        //     ans.push_back(res);
        //     return;
        // }
        // res.push_back(nums[idx]);
        // helper(nums,ans,idx+1,res);
        // res.pop_back();
        // helper(nums,ans,idx+1,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>> ans;
         vector<int> res;
         sort(nums.begin(),nums.end());
         helper(nums,ans,0,res);
         return ans;
        // for(auto& itr : ans){
        //     sort(itr.begin(),itr.end());
        // }
        // sort(ans.begin(),ans.end());
        // ans.erase(unique(ans.begin(),ans.end()),ans.end());
        // return ans;
    }
};