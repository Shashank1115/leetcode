class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int>ans;
        for(int it : nums){
            mp[it]++;
        }
        for(auto& itr : mp){
            if(itr.second > 1){
                ans.push_back(itr.first);
            }
        }
        return ans;
    }
};