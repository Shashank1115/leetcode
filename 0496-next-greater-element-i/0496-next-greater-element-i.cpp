class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
   unordered_map<int,int> mp;
   stack<int> st;
   for(int it : nums2 ){
    while(!st.empty() && it > st.top()){
        mp[st.top()] = it;
        st.pop();
    }
    st.push(it);
   }
   while(!st.empty()){
    mp[st.top()] = -1;
    st.pop();
   }
   vector<int> ans;
   for(int itr : nums1){
     ans.push_back(mp[itr]);
   }
   return ans;
    }
};



