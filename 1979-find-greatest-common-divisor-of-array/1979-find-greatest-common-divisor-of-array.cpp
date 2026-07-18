class Solution {
public:

 int   findgcd(int a , int b){
        while(b != 0){
        int  temp = b;
        b = a % b;
        a = temp;
        } 
        return a;
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int smallest = nums[0];
        int largest = nums[nums.size()-1];
        return findgcd(smallest,largest);
    }
};