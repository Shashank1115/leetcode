class Solution {
public:
    void moveZeroes(vector<int>& nums) {
//        int n = nums.size() ;
//        int counter = 0;
//        int j = 0 ;
//        for(int i = 0 ; i<n ;i++){
// if(nums[i]==0){
//     counter++;
// }
//        }
//     nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
//     for(int j = 0 ; j < counter ; j++){
//     nums.push_back(0);
//     }

int j = 0 ;
     for(int i  = 0 ; i < nums.size() ;i++){
if(nums[i] != 0){
    nums[j] = nums[i];
    j++;
}
     }
     while(j < nums.size()){
        nums[j] = 0;
        j++;
     }   
      } 
    
};