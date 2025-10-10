class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // vector<int> arr;
        // for(int it : nums){
        //     mp[it]++;
        // }
        // for(auto itr : mp){
        //     if(itr.second > 1){
        //         arr.push_back(itr.first);
        //     }
        // }
        // return arr;
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ;i++){
            int store = abs(nums[i]);
            store = store -1 ;
            if(nums[store] > 0) {
                nums[store] = -nums[store];
            }
            else
            ans.push_back(store + 1);

        }
        return ans;
    }
};