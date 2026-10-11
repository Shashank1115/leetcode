class Solution {
public:
void helper(int n , int k , int idx , vector<vector<int>> &ans , vector<int>&store , vector<int>&res){
    if(res.size() == k){
        ans.push_back(res);
        return;
    }
    if(idx == store.size()){
        return;
    }
    res.push_back(store[idx]);
    helper(n,k,idx+1,ans,store,res);
    res.pop_back();
    helper(n,k,idx+1,ans,store,res);
}
    vector<vector<int>> combine(int n, int k) {
        vector<int> store(n);
        iota(store.begin(), store.end(), 1);
        vector<vector<int>> ans;
        vector<int> res;
        helper(n,k,0,ans,store,res);
        return ans;
    }
};