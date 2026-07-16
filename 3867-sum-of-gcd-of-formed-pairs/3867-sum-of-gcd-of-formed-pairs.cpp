class Solution {
public:
vector<int> ans;
int findgcd(int a, int b ){
    while(b!=0){
        int temp = b ;
        b = a % b ;
        a = temp;
    }
    return a;
}
    long long gcdSum(vector<int>& nums) {
        ans.clear();
        int store = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            store = max(nums[i],store);
           ans.push_back( findgcd(store,nums[i]));
        }
        int n = ans.size();
        sort(ans.begin(),ans.end());
        long long sum = 0;
        for(int i = 0 ; i < n/2 ; i++){
            sum += findgcd(ans[i] , ans[n-i-1]);
        }
        return sum;
    }
};