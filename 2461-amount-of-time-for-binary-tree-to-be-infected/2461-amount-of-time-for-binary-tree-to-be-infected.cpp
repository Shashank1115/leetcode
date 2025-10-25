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
    int amountOfTime(TreeNode* root, int start) {
        if(!root) return 0;
        unordered_map<TreeNode* , TreeNode* > parent;
        TreeNode* startnode = nullptr;
        queue<TreeNode*>q;
        q.push(root);
        parent[root] = nullptr;
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node -> val == start) 
           startnode = node;
            if(node -> left){
                parent[node -> left] = node;
                q.push(node -> left);
            }
            if(node -> right ){
                parent[node -> right] = node;
                q.push(node -> right);
            }
        }
        int mins = 0 ;
        unordered_set<TreeNode*> seen;
        queue<TreeNode*> bfs;
        bfs.push(startnode);
        seen.insert(startnode);
        while(!bfs.empty()){
            int sz = bfs.size();
            bool spread = false;
            for(int i = 0 ; i < sz ; i++){
                TreeNode* cur = bfs.front();
                bfs.pop();
                if(cur -> left && !seen.count(cur -> left)){
                    bfs.push(cur -> left);
                    seen.insert(cur -> left);
                    spread = true;
                }
                if(cur -> right && !seen.count(cur -> right)){
                    bfs.push(cur -> right);
                    seen.insert(cur -> right);
                    spread = true;
                }
                TreeNode* par = parent[cur];
                if(par && !seen.count(par)){
                    bfs.push(par);
                    seen.insert(par);
                    spread = true;
                }
               
            }
             if(spread) mins++;
        }
        return mins;
    }
};