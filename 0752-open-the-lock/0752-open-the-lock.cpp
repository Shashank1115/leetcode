class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> dead;
        for(string itr : deadends){
            dead.insert(itr);
        }
        if(dead.count("0000")) return -1;
        queue<string> q;
        q.push("0000");
        unordered_set<string> vis;
        vis.insert("0000");
        int ans = 0;
        while(!q.empty()){
            int size = q.size();
            for(int i = 0 ; i < size ;i++){
                string curr = q.front();
                q.pop();
                if(curr == target) return ans;
                for(int j = 0 ; j < 4 ;j++){
                    string next = curr;
                    if(next[j] == '9'){
                        next[j] = '0';
                    }
                    else {
                        next[j]++;
                    }
                    if(!dead.count(next) && !vis.count(next)){
                        vis.insert(next);
                        q.push(next);
                    }
                    next = curr;
                    if(next[j] == '0'){
                        next[j] = '9';
                    }
                    else next[j]-- ;
                    if(!dead.count(next) && !vis.count(next)){
                        vis.insert(next);
                        q.push(next);
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};