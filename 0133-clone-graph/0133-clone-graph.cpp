/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node* , Node* > vis;
    Node* dfs(Node* cur){
        if(!cur) return nullptr;
        if(vis.count(cur)) return vis[cur];
        Node* clone = new Node(cur -> val);
        vis[cur]  = clone;
        for(Node* nei  : cur -> neighbors){
            clone -> neighbors.push_back(dfs(nei));
        }
        return clone;
    }
    Node* cloneGraph(Node* node) {
        vis.clear();
        return dfs(node);
    }
};