class Solution {
public:
    long long maximumTotalDamage(vector<int>& power) {
        unordered_map<int,long long> mp;
        for(int it :  power){
            mp[it]++;
        }
        vector<int> arr;
        for(auto itr : mp ){
            arr.push_back(itr.first);
        }
        sort(arr.begin(),arr.end());
        int m = arr.size();
        vector<long long> sum(m);
        for(int i = 0 ; i < m ; i++){
            sum[i] = 1LL * arr[i] * mp[arr[i]];
        }
        vector<long long> dp(m+1,0LL);
        for(int i = m -1 ;i >= 0 ; i--){
            long long skip = dp[i+1];
            int target = arr[i] + 3;
            int j = lower_bound(arr.begin() + i + 1 , arr.end(),target) - arr.begin();
            long long take ;
            if(j < m){
                take = sum[i] + dp[j];
            }else{
                take = sum[i];
            }
            dp[i] = max(skip,take);
        }
        return dp[0];
        }

};