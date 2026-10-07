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
    bool dfs(TreeNode* leftside , TreeNode* rightside){
        if(leftside == nullptr && rightside == nullptr) return true;
        if(leftside == nullptr || rightside == nullptr) return false;
        if(leftside -> val != rightside -> val)
        {
            return false;
        } 
return dfs(leftside -> left , rightside -> right ) && dfs(leftside -> right , rightside -> left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return dfs(root -> left , root -> right);
        
    }
};