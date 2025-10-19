class Solution {
public:
    void changelandtowater(vector<vector<char>>& grid , int i , int j ){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0') return;
        grid[i][j] = '0';
        changelandtowater(grid,i-1,j);
        changelandtowater(grid,i+1,j);
        changelandtowater(grid,i,j-1);
        changelandtowater(grid,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) return 0;
        int counter = 0 ;
        for(int i = 0 ; i < grid.size() ;i++){
            for(int j = 0 ; j < grid[0].size() ;j++){
                if(grid[i][j] == '1'){
                    counter++;
                    changelandtowater(grid,i,j);
                }
            }
        }
        return counter;
    }
};