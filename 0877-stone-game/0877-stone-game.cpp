class Solution {
public:
vector<vector<int>> dp;
int helper(vector<int> &piles , int i , int j){
    if( i == j){
        return piles[i];
    }
    if(dp[i][j] != INT_MIN){
        return dp[i][j] ;
    }
   int beginstone = piles[i] - helper(piles,i+1,j);
   int endstone = piles[j] - helper(piles , i ,j-1);
    return dp[i][j] = max(beginstone,endstone);
}
    bool stoneGame(vector<int>& piles) {
        dp.assign(piles.size(),vector<int>(piles.size(),INT_MIN));
        return helper( piles , 0 , piles.size()-1) > 0 ? true : false;
    }
};