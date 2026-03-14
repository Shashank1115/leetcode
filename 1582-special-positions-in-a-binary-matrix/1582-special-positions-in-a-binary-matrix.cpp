class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n  = mat.size();
        int m = mat[0].size();
        vector<int> rowones(n,0);
        vector<int> colones(m,0);
        for(int i = 0 ; i <  n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(mat[i][j] == 1){
                    rowones[i]++;
                    colones[j]++;
                }
            }
        }
        int ans = 0 ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(mat[i][j] == 1 && rowones[i] == 1 && colones[j] == 1){
                    ans++;
                }
            }
        }
        return ans;
    }
};