class Solution {
public:
    
    void helper( int idx , int target , vector<int> &arr , vector<vector<int>> &ans ,vector<int> &res){
    //     if(sum > target) return;
    //     if(idx == candidates.size()){
    //         if(sum == target){
    //             ans.push_back(res);
    //         }
    //         return;
    //     }
    //     sum += candidates[idx];
    //     res.push_back(candidates[idx]);
    //     helper(candidates,target,sum,idx+1,res);
    //     sum -= candidates[idx];
    //     res.pop_back();
    //     helper(candidates,target,sum,idx+1,res);
    if(target == 0){
        ans.push_back(res);
        return;
    }
    for(int i = idx ; i < arr.size() ; i++){
        if(i > idx && arr[i] == arr[i-1]) continue;
        if(arr[i] > target) break;
        res.push_back(arr[i]);
        helper(i+1,target-arr[i],arr,ans,res);
        res.pop_back();
    }
    }

    // }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        // vector<int> res;
        // helper(candidates,target,0,0,res);
        // for(auto& itr : ans){
        //     sort(itr.begin(),itr.end());
        // }
        // sort(ans.begin(),ans.end());
        // ans.erase(unique(ans.begin(),ans.end()),ans.end());
        // return ans;
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> res;
        helper(0,target,candidates,ans,res);
        return ans;

    }
};