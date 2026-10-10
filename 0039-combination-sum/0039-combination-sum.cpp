class Solution {
public:
vector<vector<int>> res;
 void helper(vector<int>& candidates , int& target , int sum ,int idx , vector<int>& ans){
        if(sum > target) return;
        if(idx == candidates.size()) {
            if(sum == target){
                res.push_back(ans);
            }
            return;
        }
        sum += candidates[idx];
        ans.push_back(candidates[idx]);
        helper(candidates,target,sum,idx,ans);
        sum -= candidates[idx];
        ans.pop_back();
        helper(candidates,target,sum,idx+1,ans);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        helper(candidates,target,0,0,ans);
        return res;
    }
};