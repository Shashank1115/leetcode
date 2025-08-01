class Solution {
public:
int nCr(int n, int r) {
    long long result = 1;

    for (int i = 0; i < r; i++) {
        result = result * (n - i);
        result = result / (i + 1);
    }
    return result;
}
    vector<vector<int>> generate(int numRows) {
       // int n = 0;
        vector<vector<int>> triangle;
        
          for (int row = 1; row <= numRows; row++) { 
            vector<int> temp; 
        for (int col = 1; col <= row; col++) {
            temp.push_back(nCr(row - 1, col - 1));
        }
        triangle.push_back(temp);
    }
    return triangle;
}
    
};