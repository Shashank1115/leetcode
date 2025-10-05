class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2 !=0)
        return false;
        stack<char> st;
        for(char ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                if(st.empty())
                return false;

            char var = st.top();
            st.pop();
            if((ch == ')' && var != '(')||(ch == '}' && var != '{')||(ch == ']' && var != '[')){
                return false;
                }
            }
        }
        return st.empty();
    }
};