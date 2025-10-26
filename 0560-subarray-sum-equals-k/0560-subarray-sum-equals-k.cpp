class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int counter = 0 ;
        // for(int i  = 0 ; i < nums.size() ;i++){
        //     int sum = 0 ;
        //     for(int j = i ; j < nums.size() ;j++){
        //         sum += nums[j];
        //         if(sum == k)
        //         {
        //         counter++;
        //         }
        //     }
        // }
        // return counter;
        unordered_map<int,int>mp;
        mp[0] = 1 ;
        int prefixsum = 0 ;
        int counter = 0 ;
        for(int i  = 0 ; i  < nums.size() ;i++){
            prefixsum += nums[i];
            int remove = prefixsum - k;
            counter += mp[remove];
            mp[prefixsum]+= 1;
        }
     return counter;
    }
};