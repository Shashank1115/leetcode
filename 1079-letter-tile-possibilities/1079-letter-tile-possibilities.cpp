class Solution {
public:
    void helper(string& tiles ,vector<string>&ans,  string curr , vector<bool> &used){
       if (!curr.empty()) {
            ans.push_back(curr);
        }

        for(int i = 0 ; i < tiles.size() ; i++){
            if(used[i]) continue;
            curr += tiles[i];
            used[i] = true;
            helper(tiles,ans,curr,used);
            curr.pop_back();
            used[i] = false;
        }
       
    }
    int numTilePossibilities(string tiles) {
        vector<string> ans;
        vector<bool> used(tiles.size(),false);
        helper(tiles,ans,"",used);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans.size();
    }
};