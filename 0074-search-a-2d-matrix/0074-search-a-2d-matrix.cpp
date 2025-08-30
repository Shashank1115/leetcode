class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(int i = 0 ; i < matrix.size() ; i++){
        //     for(int j = 0 ; j <matrix[0].size() ;j++){
        //         if(matrix[i][j] == target){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        int m = matrix.size();
        if (m == 0) return false;
        int n = matrix[0].size();
        if (n == 0) return false;
        int low = 0 ; 
        int high = m*n-1;
        while(low <= high){
            int mid = low + (high - low) /2;
            int row = mid / n;
            int col = mid % n;
             int val = matrix[row][col];
            if(val ==  target){
                return true;
            }
            else if(val < target){
                low = mid +1;
            }
            else high = mid -1;
        }
        return false;
    }
};