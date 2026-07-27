class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> ans(grid.size(),vector<int>(grid[0].size(),0));
        int m = grid.size();
        int n = grid[0].size();
        if(k == 0 ) return grid;
        while(k){
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if( j == n-1){
                    ans[(i+1)%m][0] = grid[i][n-1];
                }
                // else if( j == n-1 && i == m-1){
                //     ans[0][0] = grid[m-1][n-1];
                // }
                else {
                    ans[i][(j+1)%n] = grid[i][j];
                }
            }
        }
        k--;
        grid = ans;
        }
        return ans;
    }
};