class Solution {
public:
    string reverseWords(string s) {
       stack<string> st;
       string words;
       int n = s.size();
       for(int i = 0 ; i < n ; i++){
        if(s[i] != ' '){
            words.push_back(s[i]);
        }
        else{
            if(!words.empty()){
                st.push(words);
                words.clear();
            }
        }
       }
       if(!words.empty()) st.push(words);
       string res;
       while(!st.empty()){
        if(!res.empty()) res += ' ';
        res += st.top();
        st.pop();
       }
       return res;
    }
};