class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int maxlimit = 2048;
        vector<vector<bool>> dp (4,vector<bool> (maxlimit , false));
        dp[0][0] = true;
        unordered_set<int> ans;
        for(int itr : nums){
            ans.insert(itr);
        }
        for(int itr : nums){
            for(int i = 3 ; i >= 1 ; i--){
                for(int j = 0 ; j < maxlimit ; j++){
                    if(dp[i-1][j]){
                        dp[i][j^itr] = true;
                    }
                }
            }
        }
        for(int i = 0 ; i < maxlimit ; i++){
            if(dp[3][i]){
                ans.insert(i);
            }
        }
        return ans.size();
    }
};