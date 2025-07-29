/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root){
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool lefttoright = true;
        while(!q.empty()){
            int sizee = q.size();
            vector<int> row(sizee);
            for(int i  = 0 ; i < sizee ; i++){
            TreeNode* node = q.front();
            q.pop();
                int index ; 
                if(lefttoright == true){
                    index = i ;
                }
                else index = (sizee - 1 -i);
            
            row[index] = node -> val;
            if(node -> left){
                q.push(node -> left);
            }
            if(node -> right){
                q.push(node -> right);
                  }
            }
lefttoright = !lefttoright;
result.push_back(row);
        }
    return result;
    }
};