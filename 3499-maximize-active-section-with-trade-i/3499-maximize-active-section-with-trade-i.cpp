class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int numberofone = 0;
        for(char ch : s){
            if(ch == '1'){
                numberofone++;
            }
        }
            string t = '1' + s + '1';
            vector<pair<char,int>> nums;
            for(char chr : t){
                if(nums.empty() || nums.back().first != chr){
                    nums.push_back({chr,1});
                }
                else
                nums.back().second++;
            }
            int spread = 0;
            for(int i = 1 ; i < nums.size()-1 ;++i){
                if(nums[i].first == '1'){
                    spread = max(spread , nums[i-1].second + nums[i+1].second);
                }
            }
           
        
         return numberofone + spread;
    }
};