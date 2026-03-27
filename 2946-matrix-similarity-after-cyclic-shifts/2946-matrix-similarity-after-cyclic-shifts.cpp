class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        k = k % n;
        vector<vector<int>>result(m,vector<int>(n));
        for(int i = 0 ; i< m ; i++){
            for(int j =0 ; j < n ;j++){
                if(i % 2 == 0){
                    result[i][j] = mat[i][(j + k) % n];
                }
                else{
                    result[i][j] = mat[i][(j - k + n ) % n];
                }
            }
        }
        if(result == mat){
            return true;
        }
        return false;
    }
};