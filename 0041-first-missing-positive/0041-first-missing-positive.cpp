class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n= nums.size();
        unordered_set<int> s;
        for(int it : nums){
          if(it > 0) { 
            s.insert(it);
          }
        }
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int it: s) pq.push(it);
        int i = 1;
        while(!pq.empty()){
            int top = pq.top();
            if(top == i){
                pq.pop();
                i++;
            }
            else {
                return i;
            }
               }
               return i;
    }
};