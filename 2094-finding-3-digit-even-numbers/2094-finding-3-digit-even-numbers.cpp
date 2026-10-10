class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
       set<int> ans;
        vector<int> ans1;
        for(int i = 0 ; i < digits.size() ; i++){
            for(int  j = 0 ; j < digits.size() ;j++){
                for(int k = 0 ; k < digits.size() ; k++){
                    if(i == j || j == k || i == k) continue;
                    if(digits[i] == 0) continue;
                    if(digits[k] % 2 != 0) continue;
                    int num = digits[k] + digits[j] * 10 + digits[i] * 100;
                    ans.insert(num);
                }
            }
        }
        for(int itr : ans){
            ans1.push_back(itr);
        }

        
        return ans1;
    }
};