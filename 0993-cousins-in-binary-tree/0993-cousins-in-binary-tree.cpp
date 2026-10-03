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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
       // vector<int> level;
        while(!q.empty()){
            int n = q.size();
           // level.clear();
            bool xinsamelvl  = false ,yinsamelvl = false;
            for(int i  = 0 ; i < n ; i++)
            {   
                TreeNode* node = q.front();
                q.pop();
                // level.push_back(node -> val);
                if(node -> left && node -> right){
                    if((node -> left -> val == x && node -> right -> val == y) 
                ||(node -> left -> val == y && node -> right -> val == x)) {return false;}
                }
                if(node -> val == x){
                    xinsamelvl = true;
                }
                if(node -> val == y){
                    yinsamelvl =true;
                }
                if(node -> left){
                    q.push(node -> left);
                }
                if(node -> right){
                    q.push(node -> right);
                }

            }
          if(xinsamelvl && yinsamelvl) return true;
          if(xinsamelvl || yinsamelvl) return false;

        }
        return false;
    }
};