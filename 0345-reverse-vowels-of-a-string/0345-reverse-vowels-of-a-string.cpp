class Solution {
public:
    bool isvowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'  ) return true;
        else return false;
    }
    string reverseVowels(string s) {
        int left  =0 ;
        int right = s.size() -1 ;
        while(left < right){
            if(isvowel(s[left]) && isvowel(s[right])){
                swap(s[left] , s[right]);
                left++;
                right--;
            }
            else if(!isvowel(s[left])){
                left++;
            }
            else right--;
        }
        return s;
    }

};