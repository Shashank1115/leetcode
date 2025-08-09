class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> store(n,0);
        stack<int>st;
        for(int i  = 0 ; i < n ; i++){
        while(!st.empty() && temperatures[i] > temperatures[st.top()]){
            int idx = st.top();
            st.pop();
            store[idx] = i -idx;

        }
        st.push(i);
        }
        return store;
    }
};