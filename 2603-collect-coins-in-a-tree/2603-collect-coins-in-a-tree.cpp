class Solution {
public:
    int collectTheCoins(vector<int>& coins, vector<vector<int>>& edges) {
        int n = coins.size();
        vector<vector<int>> graph(n);
        vector<int> degree(n,0);
        for(auto &e : edges){
            int u = e[0];
            int v = e[1];

            graph[u].push_back(v);
            graph[v].push_back(u);

            degree[u]++;
            degree[v]++;

        }
        queue<int> q;
        for(int i = 0 ; i < n ; i++){
            if(degree[i] == 1 && coins[i] == 0){
                q.push(i);
            }
            while(!q.empty()){
                int u = q.front();
                q.pop();
                degree[u] = 0;
                for(int v : graph[u]){
                    if(degree[v] == 0)
                    continue;
                    degree[v]--;
                    if(degree[v] == 1 && coins[v] == 0){
                        q.push(v);
                    }
                }
            }
        }
    //         for(int i = 0 ; i < degree.size() ; i++){
    //     cout << degree[i];
    // }

            for( int i = 0 ; i < 2  ; i++){
                queue<int> leaves;
                for(int i = 0 ; i <  n ; i++){
                    if(degree[i] == 1){
                        leaves.push(i);
                    }
// while(!leaves.empty()){
//     cout << leaves.front();
//     leaves.pop();
// }
                }
                while(!leaves.empty()){
                    int top = leaves.front();
                    leaves.pop();
                    degree[top] = 0;
                    for(int u : graph[top]){
                        if(degree[u] == 0) continue;
                        degree[u]--;
                    }
                }
            }
        
        int finaldeg = 0 ;
        for(int itr : degree){
            finaldeg += itr;
        }
         
        return finaldeg;
   
    }
};