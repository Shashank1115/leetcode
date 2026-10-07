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
    int dfs(TreeNode*root , int sum){
        if(root == nullptr) return sum;
        sum = root -> val + sum *10 ;
        if(root -> left == nullptr && root -> right == nullptr){
            return sum;
        }
        if(root -> left == nullptr){
            return dfs(root -> right,sum);
        }
        if(root -> right == nullptr){
            return dfs(root -> left ,sum);
        }
       return dfs(root->left,sum) + dfs(root -> right ,sum);
    }
    int sumNumbers(TreeNode* root) {
        return dfs( root , 0);
    }
};