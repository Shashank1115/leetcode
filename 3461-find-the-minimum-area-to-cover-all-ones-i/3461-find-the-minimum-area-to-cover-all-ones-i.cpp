class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxrow = -1;
        int maxcol= -1;
        int minrow =m;
        int mincol =n;
        for(int i = 0  ; i< m ;i++){
            for(int j = 0 ; j < n ;j++){
                if(grid[i][j] == 1){
                    minrow = min(minrow,j);
                    mincol = min(mincol ,i);
                    maxrow =max(maxrow,j);
                    maxcol = max(maxcol,i);
                }

            }
        }
        if (maxrow == -1) return 0;
        int height = maxrow - minrow + 1;
        int width = maxcol - mincol +1;
        return height*width;
    }
};