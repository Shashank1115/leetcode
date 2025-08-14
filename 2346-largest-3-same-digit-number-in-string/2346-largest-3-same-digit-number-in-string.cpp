class Solution {
public:
    string largestGoodInteger(string num) {
        int ans = -1;
        char store ;
        for(int i = 0 ; i < num.size()-2 ; i++){
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                store = num[i];
                int digit = store - '0';
                ans = max(ans,digit);
            }
        }
            if(ans == -1)  return "";
            return string(3 , '0' + ans);
        
    }
};