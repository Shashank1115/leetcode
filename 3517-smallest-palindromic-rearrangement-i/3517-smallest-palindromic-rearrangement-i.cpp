class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> store(26,0);
        for(char ch : s){
            store[ch-'a']++;
        }
        string left = "";
        string mid = "";
        string right = "";
        for(int i = 0 ; i < 26 ; i++){
            left += string(store[i]/2 , i+'a');
            if(store[i] % 2){
                mid = char(i+'a');
            }
        }
        right = left;
        reverse(right.begin(),right.end());
        return left + mid + right;

    }
};