class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        unordered_set<string> valid;
        for(string gene : bank){
            valid.insert(gene);
        }
        if(!valid.count(endGene)) return -1;
        queue<string> q;
        q.push(startGene);
        unordered_set<string> visited;
        visited.insert(startGene);
        int mut = 0;
        string chars = "ACGT";
        while(!q.empty()){
            int size = q.size();
            for(int i = 0 ; i < size ; i++){
                string curr = q.front();
                q.pop();
                if(curr == endGene) return mut;
                for(int i = 0 ; i < 8 ; i++){
                    char og = curr[i];
                    for(char c : chars){
                        if(c == og) continue;
                        string next = curr;
                        next[i] = c;
                        if(valid.count(next) && !visited.count(next)){
                            visited.insert(next);
                            q.push(next);
                        }
                    }
                }
            }
            mut++;
        }
 return -1;
    }
};