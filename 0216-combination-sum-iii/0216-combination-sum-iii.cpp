class Solution {
public:
    void helper(int k , int n , vector<bool>&used , vector<vector<int>>&ans , vector<int>&res , int sum , int idx , vector<int>& store){
        if(sum == n && res.size() == k){
            ans.push_back(res);
            return;
        }
        if(idx == used.size()){
            return;
        }
        if(used[idx]) return;
        if(sum + store[idx] <= n){
        sum += store[idx];
        used[idx] = true;
        res.push_back(store[idx]);
        helper(k,n,used,ans,res,sum,idx+1,store);
        sum -= store[idx];
        used[idx] = false;
        res.pop_back();
        }
        helper(k,n,used,ans,res,sum,idx+1,store);
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<bool> used(9,false);
        vector<int> store(9);
        iota(store.begin(),store.end(),1);
        vector<vector<int>> ans;
        vector<int> res;
        helper(k,n,used,ans,res,0,0,store);
        return ans;

    }
};