class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0 ; i < n ;i++){
            int rowmin = matrix[i][0];
            int col = 0;
        for(int j = 0 ; j < m ; j++){
            if(rowmin > matrix[i][j]){
                rowmin = matrix[i][j];
                col = j;
            }
        } 
        bool maxcol = true;
        for(int k = 0 ; k < n ; k++){
            if(matrix[k][col] > rowmin){
                maxcol = false;
                break;
            }
        }
    if(maxcol){
        ans.push_back(rowmin);
    }
        }
        return ans;
    }
};