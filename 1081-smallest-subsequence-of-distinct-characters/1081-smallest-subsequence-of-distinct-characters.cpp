class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> occurance(26);
        for(int i = 0 ; i < s.size() ; i++){
            occurance[s[i] - 'a'] = i;
           
        }

        vector<bool> alr(26,false);
        stack<char> st;
        for(int i = 0 ; i < s.size() ; i++){
            if(alr[s[i] - 'a']  ) continue;
         while(!st.empty() && st.top() - 'a'  > s[i] - 'a'  && occurance[st.top() - 'a'] > i ){
                alr[st.top() - 'a'] = false;
                st.pop();
            }
             st.push(s[i]);
            alr[s[i] - 'a'] = true;
           
        }
string ans = "";
while(!st.empty()){
    ans += st.top();
    st.pop();
}
  reverse(ans.begin() , ans.end());
return ans;
    }
};