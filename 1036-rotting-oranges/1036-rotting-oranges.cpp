class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
      int m  = grid.size();
      if(grid.empty()) return 0;
      int n = grid[0].size();
      queue<pair<pair<int,int>,int>> q;
      int fresh = 0 ;
      for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            if(grid[i][j] == 2) q.push({{i,j},0});
            else if(grid[i][j] == 1) fresh++;
        }
      }
    if(fresh  == 0 )return 0;
    int mins = 0 ;
    vector<int> dr = {-1,1,0,0};
    vector<int> dc = {0,0,-1,1};
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        int r = cur.first.first;
        int c = cur.first.second;
        int t = cur.second;
        for(int k = 0 ; k < 4 ; k++){
            int nr = r + dr[k];
            int nc = c + dc[k];
            if(nr >= 0 && nc >= 0 && nr < m && nc < n && grid[nr][nc] == 1){
                grid[nr][nc] = 2 ;
                fresh--;
                q.push({{nr,nc},t+1});
                mins = max(mins,t+1);
            }
        }

    }
    // if(fresh == 0) return mins ;
    // else return -1;
    return (fresh == 0) ? mins : -1;
    }
};