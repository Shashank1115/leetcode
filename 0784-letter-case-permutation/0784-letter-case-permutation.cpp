class Solution {
public:
    void helper(string& s , vector<string>& ans , int idx , string curr){
        string dup = s;
        if(idx == s.size()){
            ans.push_back(curr);
            return;
        }
        if(isdigit(dup[idx])){
            curr += dup[idx];
            helper(dup,ans,idx+1,curr);
            return;
        }
       curr += tolower( dup[idx])  ;
       helper(dup,ans,idx+1,curr);
       curr.pop_back();

       curr += toupper(dup[idx]);
       helper(dup,ans,idx+1,curr);
       curr.pop_back();
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        helper(s,ans,0,"");
        return ans;
    }
};