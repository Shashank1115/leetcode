class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // vector<vector<string>> result;
        // for(int i = 0 ; i < strs.size() ;i++){
        //     vector<string> ans;
        //     ans.push_back(strs[i]);
        //       string test = strs[i];
        //         sort(test.begin(),test.end());
        //     for(int j = i+1 ; j < strs.size(); ){
        //        string check = strs[j];
        //         sort(check.begin(),check.end());
        //         if(test == check){
        //             ans.push_back(strs[j]);
        //             strs.erase(strs.begin() + j);
        //         }
        //         else{
        //             j++;
        //         }
        //     }
        //     result.push_back(ans);
        // }
        // return result;
        unordered_map<string, vector<string>> mp;
        
        for (auto &s : strs) {
            string key = s;
            sort(key.begin(), key.end()); // Sorted string as key
            mp[key].push_back(s);         // Group all anagrams
        }
        
        vector<vector<string>> result;
        for (auto &pair : mp) {
            result.push_back(pair.second);
        }
        return result;
    }
};