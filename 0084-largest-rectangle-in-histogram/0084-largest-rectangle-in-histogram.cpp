class Solution {
public:

vector<int> previoussmaller(const vector<int>& heights) {
    int n = heights.size();
    vector<int> pse(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && heights[st.top()] >= heights[i]) {
            st.pop();
        }
        pse[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return pse;
}

vector<int> nextsmaller(const vector<int>& heights) {
    int n = heights.size();
    vector<int> nse(n, n);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && heights[st.top()] >= heights[i]) {
            st.pop();
        }
        nse[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    return nse;
}
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
    if (n == 0) return 0;
    vector<int> pse = previoussmaller(heights);
    vector<int> nse = nextsmaller(heights);
    int maxarea = 0;
    for (int i = 0; i < n; i++) {
        int width = nse[i] - pse[i] - 1;
        int area = heights[i] * width;
        maxarea = max(maxarea, area);
    }
    return maxarea;
    }
};