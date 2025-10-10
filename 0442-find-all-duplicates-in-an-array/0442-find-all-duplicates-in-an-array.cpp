class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> arr;
        for(int it : nums){
            mp[it]++;
        }
        for(auto itr : mp){
            if(itr.second > 1){
                arr.push_back(itr.first);
            }
        }
        return arr;
    }
};