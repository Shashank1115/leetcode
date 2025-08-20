class Solution {
public:
int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        vector<int> store;
        for(int i = 0 ; i < matrix.size();i++){
            for(int j = 0 ; j< matrix.size() ;j++){
                pq.push(matrix[i][j]);
            }
        }
        int val = k-1;
        while(val--){
            pq.pop();
        }
    return pq.top();
        
    }
};