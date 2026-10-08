class Solution {
public:
    bool helper(const string& n , int i , int size){
        if(i >= size/2) return true;
        if(n[i] != n[size-i-1]){
            return false;
        }
        return helper(n,i+1,size);
    }
    bool isPalindrome(string s) {
        
        string n="";
         for (char &c : s) {
            if(isalnum(c)){
            n += tolower(c);
            }
        }
        int size= n.size();
        return helper(n,0,size);
    }
};