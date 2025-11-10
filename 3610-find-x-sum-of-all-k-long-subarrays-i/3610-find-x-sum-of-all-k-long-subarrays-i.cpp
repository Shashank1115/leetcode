class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> ans;
        for (int start = 0; start + k <= nums.size(); start++){
                    unordered_map<int, int> mp;
                    for (int i = 0; i < k; i++) {
                         mp[nums[start + i]]++;
                    }
                
                 auto cmp = [](pair<int,int>& a, pair<int,int>& b) {
                if (a.second == b.second) return a.first < b.first; 
                return a.second < b.second; 
            };
            priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> pq(cmp);
                for(auto itr  : mp){
                    pq.push({itr.first,itr.second});
                }
           long long sum = 0;
            for (int t = 0; t < x && !pq.empty(); t++) {
                auto top = pq.top();
                pq.pop();
                sum += 1LL * top.first * top.second;
            }
             ans.push_back((int)sum);
           

        }
        return ans;
    }
};