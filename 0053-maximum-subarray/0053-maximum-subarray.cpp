class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int var  = INT_MIN;
       int current = 0 ;
       for(int i = 0 ; i < nums.size() ; i++){
        current = max(nums[i] , current+ nums[i]); // itr purpose ke liye jisse ki hame max value pata lag jaye ki wo abhi wali hai ki jo phele se chalte aa rhi hai wo hai
        var = max(current,var);  // wo return karna hai jo sahi mai max hai 
       }
       return var;
    }
};